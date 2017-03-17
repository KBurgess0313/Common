#ifndef COMMON_NETWORK_RESTSERVER_H
#define COMMON_NETWORK_RESTSERVER_H

#include <cpprest/http_listener.h>
#include <boost/signals2.hpp>

namespace common {
namespace network {

  typedef boost::function<void(web::http::http_request)> HttpCallback;
  typedef boost::signals2::signal<void(web::http::http_request)> SignalHttpRequest;

  class RestServer
  {
  public:
    RestServer(const web::http::uri& aHostUrl);

    void setGetHandler(HttpCallback aCallback);
    void setConnectHandler(HttpCallback aCallback);
    void setPostHandler(HttpCallback aCallback);
    void setDeleteHandler(HttpCallback aCallback);

  private:
    void handle_get(web::http::http_request aRequest);
    void handle_connect(web::http::http_request aRequest);
    void handle_post(web::http::http_request aRequest);
    void handle_delete(web::http::http_request aRequest);

    SignalHttpRequest mSignalGetRequest;
    SignalHttpRequest mSignalConnectRequest;
    SignalHttpRequest mSignalPostRequest;
    SignalHttpRequest mSignalDeleteRequest;

    web::http::experimental::listener::http_listener mListener;
  };

} // end namespace network
} // end namespace common

#endif //COMMON_NETWORK_RESTSERVER_H
