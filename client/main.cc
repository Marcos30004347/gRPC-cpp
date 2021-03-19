
#include "../build/gen/informer.pb.h"
#include "../build/gen/informer.grpc.pb.h"

#include <stdlib.h>

#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>


class InformerClient {
public:
    InformerClient(std::shared_ptr<grpc::Channel> channel) : stub_(Informer::NewStub(channel)) {}

    std::string GetDescription(const std::string& service) {
        GetDescriptionReq request;
        request.set_service(service);

        GetDescriptionRep reply;

        grpc::ClientContext context;

        grpc::Status status = stub_->GetDescription(&context, request, &reply);

        if (status.ok()) {
        return reply.description();
        } else {
        std::cout << status.error_code() << ": " << status.error_message() << std::endl;
        return "RPC failed";
        }
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
 private:
  std::unique_ptr<Informer::Stub> stub_;
};


int main(int argc, char** argv) {

    InformerClient informer(grpc::CreateChannel(argv[1], grpc::InsecureChannelCredentials()));
    int port = informer.GetPort(argv[2]);
    std::string description = informer.GetDescription(argv[2]);
    std::cout << "service port: " << port << std::endl;
    std::cout << "service description: " << description << std::endl;
    return 0;
}