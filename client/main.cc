#include "../build/gen/informer.pb.h"
#include "../build/gen/informer.grpc.pb.h"

#include <stdlib.h>

#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>

struct Description {
    std::string name;
    std::string port_and_protocol;
    std::string aliases;
    std::string comments;
};

class InformerClient {
private:
    std::unique_ptr<Informer::Stub> stub_;

public:
    InformerClient(std::shared_ptr<grpc::Channel> channel) : stub_(Informer::NewStub(channel)) {}

    Description GetDescription(const std::string& service) {
        GetDescriptionReq request;
        request.set_service(service);

        GetDescriptionRep reply;

        grpc::ClientContext context;

        grpc::Status status = stub_->GetDescription(&context, request, &reply);

        if (!status.ok()) {
            std::cout << "RPC failed: ";
            std::cout << status.error_code() << ": " << status.error_message() << std::endl;
            exit(EXIT_FAILURE);
        }

        Description desc;
        desc.aliases = reply.aliases();
        desc.name = reply.name();
        desc.comments = reply.comments();
        desc.port_and_protocol = reply.port_and_protocol();
        return desc;
    }

    int GetPort(const std::string& service) {
        GetPortReq request;
        request.set_service(service);

        GetPortRep reply;

        grpc::ClientContext context;

        grpc::Status status = stub_->GetPort(&context, request, &reply);

        if (status.ok()) {
            return reply.port();
        } else {
            std::cout << status.error_code() << ": " << status.error_message() << std::endl;
            return -1;
        }
    }
};


int main(int argc, char** argv) {
    InformerClient informer(grpc::CreateChannel(argv[1], grpc::InsecureChannelCredentials()));
    int port = informer.GetPort(argv[2]);
    std::cout << "service port: " << port << std::endl;

    Description description = informer.GetDescription(argv[2]);

    if(description.name.length())
    std::cout << "service name: " << description.name << std::endl;
    
    if(description.port_and_protocol.length())
    std::cout << "service port/protocol: " << description.port_and_protocol<< std::endl;
    
    if(description.aliases.length())
    std::cout << "service aliases: " << description.aliases << std::endl;
    
    if(description.comments.length())
    std::cout << "service comments: " << description.comments << std::endl;

    return 0;
}