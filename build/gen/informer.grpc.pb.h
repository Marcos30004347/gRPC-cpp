// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: informer.proto
#ifndef GRPC_informer_2eproto__INCLUDED
#define GRPC_informer_2eproto__INCLUDED

#include "informer.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

class Informer final {
 public:
  static constexpr char const* service_full_name() {
    return "Informer";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetPort(::grpc::ClientContext* context, const ::GetPortReq& request, ::GetPortRep* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GetPortRep>> AsyncGetPort(::grpc::ClientContext* context, const ::GetPortReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GetPortRep>>(AsyncGetPortRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GetPortRep>> PrepareAsyncGetPort(::grpc::ClientContext* context, const ::GetPortReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GetPortRep>>(PrepareAsyncGetPortRaw(context, request, cq));
    }
    virtual ::grpc::Status GetDescription(::grpc::ClientContext* context, const ::GetDescriptionReq& request, ::GetDescriptionRep* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GetDescriptionRep>> AsyncGetDescription(::grpc::ClientContext* context, const ::GetDescriptionReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GetDescriptionRep>>(AsyncGetDescriptionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GetDescriptionRep>> PrepareAsyncGetDescription(::grpc::ClientContext* context, const ::GetDescriptionReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GetDescriptionRep>>(PrepareAsyncGetDescriptionRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void GetPort(::grpc::ClientContext* context, const ::GetPortReq* request, ::GetPortRep* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetPort(::grpc::ClientContext* context, const ::GetPortReq* request, ::GetPortRep* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetPort(::grpc::ClientContext* context, const ::GetPortReq* request, ::GetPortRep* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void GetDescription(::grpc::ClientContext* context, const ::GetDescriptionReq* request, ::GetDescriptionRep* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetDescription(::grpc::ClientContext* context, const ::GetDescriptionReq* request, ::GetDescriptionRep* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetDescription(::grpc::ClientContext* context, const ::GetDescriptionReq* request, ::GetDescriptionRep* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GetPortRep>* AsyncGetPortRaw(::grpc::ClientContext* context, const ::GetPortReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GetPortRep>* PrepareAsyncGetPortRaw(::grpc::ClientContext* context, const ::GetPortReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GetDescriptionRep>* AsyncGetDescriptionRaw(::grpc::ClientContext* context, const ::GetDescriptionReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GetDescriptionRep>* PrepareAsyncGetDescriptionRaw(::grpc::ClientContext* context, const ::GetDescriptionReq& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetPort(::grpc::ClientContext* context, const ::GetPortReq& request, ::GetPortRep* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GetPortRep>> AsyncGetPort(::grpc::ClientContext* context, const ::GetPortReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GetPortRep>>(AsyncGetPortRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GetPortRep>> PrepareAsyncGetPort(::grpc::ClientContext* context, const ::GetPortReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GetPortRep>>(PrepareAsyncGetPortRaw(context, request, cq));
    }
    ::grpc::Status GetDescription(::grpc::ClientContext* context, const ::GetDescriptionReq& request, ::GetDescriptionRep* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GetDescriptionRep>> AsyncGetDescription(::grpc::ClientContext* context, const ::GetDescriptionReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GetDescriptionRep>>(AsyncGetDescriptionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GetDescriptionRep>> PrepareAsyncGetDescription(::grpc::ClientContext* context, const ::GetDescriptionReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GetDescriptionRep>>(PrepareAsyncGetDescriptionRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetPort(::grpc::ClientContext* context, const ::GetPortReq* request, ::GetPortRep* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetPort(::grpc::ClientContext* context, const ::GetPortReq* request, ::GetPortRep* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetPort(::grpc::ClientContext* context, const ::GetPortReq* request, ::GetPortRep* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void GetDescription(::grpc::ClientContext* context, const ::GetDescriptionReq* request, ::GetDescriptionRep* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetDescription(::grpc::ClientContext* context, const ::GetDescriptionReq* request, ::GetDescriptionRep* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetDescription(::grpc::ClientContext* context, const ::GetDescriptionReq* request, ::GetDescriptionRep* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::GetPortRep>* AsyncGetPortRaw(::grpc::ClientContext* context, const ::GetPortReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GetPortRep>* PrepareAsyncGetPortRaw(::grpc::ClientContext* context, const ::GetPortReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GetDescriptionRep>* AsyncGetDescriptionRaw(::grpc::ClientContext* context, const ::GetDescriptionReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GetDescriptionRep>* PrepareAsyncGetDescriptionRaw(::grpc::ClientContext* context, const ::GetDescriptionReq& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetPort_;
    const ::grpc::internal::RpcMethod rpcmethod_GetDescription_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetPort(::grpc::ServerContext* context, const ::GetPortReq* request, ::GetPortRep* response);
    virtual ::grpc::Status GetDescription(::grpc::ServerContext* context, const ::GetDescriptionReq* request, ::GetDescriptionRep* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetPort : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetPort() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetPort() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPort(::grpc::ServerContext* /*context*/, const ::GetPortReq* /*request*/, ::GetPortRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetPort(::grpc::ServerContext* context, ::GetPortReq* request, ::grpc::ServerAsyncResponseWriter< ::GetPortRep>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetDescription : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetDescription() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetDescription() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDescription(::grpc::ServerContext* /*context*/, const ::GetDescriptionReq* /*request*/, ::GetDescriptionRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetDescription(::grpc::ServerContext* context, ::GetDescriptionReq* request, ::grpc::ServerAsyncResponseWriter< ::GetDescriptionRep>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetPort<WithAsyncMethod_GetDescription<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetPort : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetPort() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::GetPortReq, ::GetPortRep>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::GetPortReq* request, ::GetPortRep* response) { return this->GetPort(context, request, response); }));}
    void SetMessageAllocatorFor_GetPort(
        ::grpc::experimental::MessageAllocator< ::GetPortReq, ::GetPortRep>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::GetPortReq, ::GetPortRep>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetPort() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPort(::grpc::ServerContext* /*context*/, const ::GetPortReq* /*request*/, ::GetPortRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetPort(
      ::grpc::CallbackServerContext* /*context*/, const ::GetPortReq* /*request*/, ::GetPortRep* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetPort(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::GetPortReq* /*request*/, ::GetPortRep* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetDescription : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetDescription() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::GetDescriptionReq, ::GetDescriptionRep>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::GetDescriptionReq* request, ::GetDescriptionRep* response) { return this->GetDescription(context, request, response); }));}
    void SetMessageAllocatorFor_GetDescription(
        ::grpc::experimental::MessageAllocator< ::GetDescriptionReq, ::GetDescriptionRep>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::GetDescriptionReq, ::GetDescriptionRep>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetDescription() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDescription(::grpc::ServerContext* /*context*/, const ::GetDescriptionReq* /*request*/, ::GetDescriptionRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetDescription(
      ::grpc::CallbackServerContext* /*context*/, const ::GetDescriptionReq* /*request*/, ::GetDescriptionRep* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetDescription(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::GetDescriptionReq* /*request*/, ::GetDescriptionRep* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetPort<ExperimentalWithCallbackMethod_GetDescription<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_GetPort<ExperimentalWithCallbackMethod_GetDescription<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetPort : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetPort() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetPort() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPort(::grpc::ServerContext* /*context*/, const ::GetPortReq* /*request*/, ::GetPortRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetDescription : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetDescription() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetDescription() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDescription(::grpc::ServerContext* /*context*/, const ::GetDescriptionReq* /*request*/, ::GetDescriptionRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetPort : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetPort() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetPort() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPort(::grpc::ServerContext* /*context*/, const ::GetPortReq* /*request*/, ::GetPortRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetPort(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetDescription : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetDescription() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_GetDescription() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDescription(::grpc::ServerContext* /*context*/, const ::GetDescriptionReq* /*request*/, ::GetDescriptionRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetDescription(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetPort : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetPort() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetPort(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetPort() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetPort(::grpc::ServerContext* /*context*/, const ::GetPortReq* /*request*/, ::GetPortRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetPort(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetPort(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetDescription : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetDescription() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetDescription(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetDescription() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDescription(::grpc::ServerContext* /*context*/, const ::GetDescriptionReq* /*request*/, ::GetDescriptionRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetDescription(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetDescription(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetPort : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetPort() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::GetPortReq, ::GetPortRep>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::GetPortReq, ::GetPortRep>* streamer) {
                       return this->StreamedGetPort(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetPort() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetPort(::grpc::ServerContext* /*context*/, const ::GetPortReq* /*request*/, ::GetPortRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetPort(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::GetPortReq,::GetPortRep>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetDescription : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetDescription() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::GetDescriptionReq, ::GetDescriptionRep>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::GetDescriptionReq, ::GetDescriptionRep>* streamer) {
                       return this->StreamedGetDescription(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetDescription() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetDescription(::grpc::ServerContext* /*context*/, const ::GetDescriptionReq* /*request*/, ::GetDescriptionRep* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetDescription(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::GetDescriptionReq,::GetDescriptionRep>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetPort<WithStreamedUnaryMethod_GetDescription<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetPort<WithStreamedUnaryMethod_GetDescription<Service > > StreamedService;
};


#endif  // GRPC_informer_2eproto__INCLUDED
