#include "../build/gen/informer.pb.h"
#include "../build/gen/informer.grpc.pb.h"

#include <stdlib.h>

#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>

#include <fstream>
#include <sstream>
#include <istream>

char* filename;

class InformerImp final: public Informer::Service {
    
    grpc::Status GetDescription(grpc::ServerContext* context, const GetDescriptionReq* req, GetDescriptionRep* reply) {

        std::string line;
        std::ifstream file(filename);

        while (std::getline(file, line))
        {
            // Ignore comments
            if(line[0] == '#') continue;

            std::istringstream iss(line);

            std::string service;
            std::string port;
            iss >> service >> port;

            if(service == req->service()) {
                std::string description = iss.str();
                unsigned long pos = description.find("#");
                if(pos != std::string::npos) {
                    description = description.substr(pos + 2, description.length() - 1);
                }
                reply->set_description(description);
                break;
            }
        }
        file.close();
        return grpc::Status::OK;
    }
    grpc::Status GetPort(grpc::ServerContext* context, const GetPortReq* req, GetPortRep* reply) {

        std::string line;
        std::ifstream file(filename);

        while (std::getline(file, line))
        {
            std::istringstream iss(line);
            std::string service;
            std::string port;

            iss >> service >> port;

            if(service == req->service()) {
                std::string sport = port.substr(0, port.find_first_of("/"));
                reply->set_port(atoi(sport.c_str()));
                break;
            }
        }
        file.close();
        
        return grpc::Status::OK;
    }
};

int main(int argc, char* argv[]) {
    if(argc < 3) {
        printf("server <port> <services_file>\n");
    }
    std::string adress = std::string("localhost:") + std::string(argv[1]);
    filename = argv[2];

    InformerImp service;

    grpc::EnableDefaultHealthCheckService(true);

    grpc::reflection::InitProtoReflectionServerBuilderPlugin();

    grpc::ServerBuilder builder;

    builder.AddListeningPort(adress, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
  
    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << adress << std::endl;

    server->Wait();
}