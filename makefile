LDFLAGS += -L/usr/local/lib `pkg-config --libs grpc++ grpc`       \
           -lgrpc++_reflection \
           -lprotobuf -lpthread -ldl

all:
	g++ ./build/gen/informer.grpc.pb.cc ./build/gen/informer.pb.cc server/main.cc $^ $(LDFLAGS) -o svc
	g++ ./build/gen/informer.grpc.pb.cc ./build/gen/informer.pb.cc client/main.cc $^ $(LDFLAGS) -o cln

compile-protos:
	protoc -I ./protos --grpc_out=./build/gen --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` ./protos/informer.proto
	protoc --proto_path=protos --cpp_out=build/gen protos/informer.proto

run_server:
	sudo ./svc $(arg1) $(arg2)
run_client:
	sudo ./cln $(arg1) $(arg2)