#ifndef COMMON_INTERFACES_TCPRESTSERVER_H
#define COMMON_INTERFACES_TCPRESTSERVER_H

#include <cpprest\http_listener.h>

namespace Common {
namespace Interfaces {

  class TcpRestServer
  {
  public:
    TcpRestServer(const web::http::uri& aHostUrl);

  private:
    void handle_get(web::http::http_request aRequest);
    void handle_connect(web::http::http_request aRequest);
    void handle_post(web::http::http_request aRequest);
    void handle_delete(web::http::http_request aRequest);

    web::http::experimental::listener::http_listener m_listener;
  };

} // end namespace Interfaces
} // end namespace Common
#endif
