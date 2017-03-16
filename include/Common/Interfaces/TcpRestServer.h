#ifndef COMMON_INTERFACES_TCPRESTSERVER_H
#define COMMON_INTERFACES_TCPRESTSERVER_H

#include <cpprest/http_listener.h>
#include <boost/signals2.hpp>

namespace Common {
namespace Interfaces {

  typedef boost::function<void(web::http::http_request)> RestCallback;
  typedef boost::signals2::signal<void(web::http::http_request)> RequestSignal;

  class TcpRestServer
  {
  public:
    TcpRestServer(const web::http::uri& aHostUrl);

    void setGetHandler(RestCallback aCallback);
    void setConnectHandler(RestCallback aCallback);
    void setPostHandler(RestCallback aCallback);
    void setDeleteHandler(RestCallback aCallback);

  private:
    void handle_get(web::http::http_request aRequest);
    void handle_connect(web::http::http_request aRequest);
    void handle_post(web::http::http_request aRequest);
    void handle_delete(web::http::http_request aRequest);

    RequestSignal mGetSignal;
    RequestSignal mConnectSignal;
    RequestSignal mPostSignal;
    RequestSignal mDeleteSignal;

    web::http::experimental::listener::http_listener mListener;
  };

} // end namespace Interfaces
} // end namespace Common
#endif
