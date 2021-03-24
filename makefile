LDFLAGS += -L/usr/local/lib `pkg-config --libs grpc++ grpc`       \
           -lgrpc++_reflection \
           -lprotobuf -lpthread -ldl

all: compile-protos compile_server compile_client

compile_server:
	g++ ./build/gen/informer.grpc.pb.cc ./build/gen/informer.pb.cc server/main.cc $^ $(LDFLAGS) -o svc

compile_client:
	g++ ./build/gen/informer.grpc.pb.cc ./build/gen/informer.pb.cc client/main.cc $^ $(LDFLAGS) -o cln

compile-protos:
	if [ -d ./build ]; then rm -rf ./build; fi;
	mkdir -p build/gen
	protoc -I ./protos --grpc_out=./build/gen --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` ./protos/informer.proto
	protoc --proto_path=protos --cpp_out=build/gen protos/informer.proto

run_server:
	sudo ./svc $(arg1) $(arg2)

run_client:
	sudo ./cln $(arg1) $(arg2)