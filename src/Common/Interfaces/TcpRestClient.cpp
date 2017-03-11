#include <Common\Interfaces\TcpRestClient.h>

namespace Common {
namespace Interfaces {

  TcpRestClient::TcpRestClient(const web::http::uri& aHostUrl) :
    mClient(aHostUrl)
  {
  }

  web::http::http_response TcpRestClient::write_get(web::http::http_request aRequest)
  {
    mClient.request(web::http::methods::GET, aRequest.to_string());
  }

  web::http::http_response TcpRestClient::write_put(web::http::http_request aRequest)
  {

  }

  web::http::http_response TcpRestClient::write_post(web::http::http_request aRequest)
  {

  }

  web::http::http_response TcpRestClient::write_delete(web::http::http_request aRequest)
  {

  }

} //end namespace Interfaces
} //end namespace Common