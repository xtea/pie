// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: audio_streaming.proto
#ifndef GRPC_audio_5fstreaming_2eproto__INCLUDED
#define GRPC_audio_5fstreaming_2eproto__INCLUDED

#include "audio_streaming.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc_impl {
class Channel;
class CompletionQueue;
class ServerCompletionQueue;
}  // namespace grpc_impl

namespace grpc {
namespace experimental {
template <typename RequestT, typename ResponseT>
class MessageAllocator;
}  // namespace experimental
}  // namespace grpc_impl

namespace grpc {
class ServerContext;
}  // namespace grpc

namespace com {
namespace baidu {
namespace acu {
namespace pie {

class AsrService final {
 public:
  static constexpr char const* service_full_name() {
    return "com.baidu.acu.pie.AsrService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>> send(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>>(sendRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>> Asyncsend(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>>(AsyncsendRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>> PrepareAsyncsend(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>>(PrepareAsyncsendRaw(context, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void send(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::com::baidu::acu::pie::AudioFragmentRequest,::com::baidu::acu::pie::AudioFragmentResponse>* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientReaderWriterInterface< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>* sendRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>* AsyncsendRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>* PrepareAsyncsendRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReaderWriter< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>> send(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>>(sendRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>> Asyncsend(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>>(AsyncsendRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>> PrepareAsyncsend(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>>(PrepareAsyncsendRaw(context, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void send(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::com::baidu::acu::pie::AudioFragmentRequest,::com::baidu::acu::pie::AudioFragmentResponse>* reactor) override;
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
    ::grpc::ClientReaderWriter< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>* sendRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>* AsyncsendRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>* PrepareAsyncsendRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_send_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status send(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::com::baidu::acu::pie::AudioFragmentResponse, ::com::baidu::acu::pie::AudioFragmentRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_send() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status send(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::com::baidu::acu::pie::AudioFragmentResponse, ::com::baidu::acu::pie::AudioFragmentRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestsend(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::com::baidu::acu::pie::AudioFragmentResponse, ::com::baidu::acu::pie::AudioFragmentRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_send<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_send() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackBidiHandler< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>(
          [this] { return this->send(); }));
    }
    ~ExperimentalWithCallbackMethod_send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status send(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::com::baidu::acu::pie::AudioFragmentResponse, ::com::baidu::acu::pie::AudioFragmentRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerBidiReactor< ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>* send() {
      return new ::grpc::internal::UnimplementedBidiReactor<
        ::com::baidu::acu::pie::AudioFragmentRequest, ::com::baidu::acu::pie::AudioFragmentResponse>;}
  };
  typedef ExperimentalWithCallbackMethod_send<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_send() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status send(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::com::baidu::acu::pie::AudioFragmentResponse, ::com::baidu::acu::pie::AudioFragmentRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_send() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status send(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::com::baidu::acu::pie::AudioFragmentResponse, ::com::baidu::acu::pie::AudioFragmentRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestsend(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_send : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_send() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this] { return this->send(); }));
    }
    ~ExperimentalWithRawCallbackMethod_send() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status send(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::com::baidu::acu::pie::AudioFragmentResponse, ::com::baidu::acu::pie::AudioFragmentRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* send() {
      return new ::grpc::internal::UnimplementedBidiReactor<
        ::grpc::ByteBuffer, ::grpc::ByteBuffer>;}
  };
  typedef Service StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef Service StreamedService;
};

}  // namespace pie
}  // namespace acu
}  // namespace baidu
}  // namespace com


#endif  // GRPC_audio_5fstreaming_2eproto__INCLUDED
