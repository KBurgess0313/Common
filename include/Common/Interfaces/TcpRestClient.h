#ifndef COMMON_INTERFACES_TCPRESTCLIENT_H
#define COMMON_INTERFACES_TCPRESTCLIENT_H

#include <cpprest/http_client.h>

namespace Common {
namespace Interfaces {

class TcpRestClient
{
public:
  TcpRestClient(const web::http::uri& aHostUrl);

private:
  web::http::http_response write_get(web::http::http_request aRequest);
  web::http::http_response write_put(web::http::http_request aRequest);
  web::http::http_response write_post(web::http::http_request aRequest);
  web::http::http_response write_delete(web::http::http_request aRequest);

  web::http::client::http_client mClient;
};

} //end namespace Interfaces
} //end namespace Common

#endif