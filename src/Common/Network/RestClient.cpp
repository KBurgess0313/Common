#include <Common/Network/RestClient.h>

namespace common {
namespace network {

  RestClient::RestClient(const web::http::uri& aHostUrl) :
    mClient(aHostUrl)
  {
  }

  web::http::http_response RestClient::write_get(web::http::http_request aRequest)
  {
    mClient.request(web::http::methods::GET, aRequest.to_string());
  }

  web::http::http_response RestClient::write_put(web::http::http_request aRequest)
  {

  }

  web::http::http_response RestClient::write_post(web::http::http_request aRequest)
  {

  }

  web::http::http_response RestClient::write_delete(web::http::http_request aRequest)
  {

  }

} //end namespace network
} //end namespace Common
