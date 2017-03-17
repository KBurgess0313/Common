#ifndef COMMON_NETWORK_RESTCLIENT_H
#define COMMON_NETWORK_RESTCLIENT_H

#include <cpprest/http_client.h>

namespace common {
namespace network {

class RestClient
{
public:
  RestClient(const web::http::uri& aHostUrl);

  web::http::http_response write_get(web::http::http_request aRequest);
  web::http::http_response write_put(web::http::http_request aRequest);
  web::http::http_response write_post(web::http::http_request aRequest);
  web::http::http_response write_delete(web::http::http_request aRequest);

private:
  web::http::client::http_client mClient;
};

} //end namespace network
} //end namespace Common

#endif
