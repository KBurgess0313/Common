#include "Common/Network/RestServer.h"

#include <string>

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

#include "Common/Network/Message/MessageTypes.h"

namespace common {
namespace network {

  RestServer::RestServer(const web::http::uri& aHostUrl) :
    mListener(web::http::experimental::listener::http_listener(aHostUrl))
  {
    mListener.support(web::http::methods::GET,
      std::bind(&RestServer::handle_get,
        this,
        std::placeholders::_1));
    mListener.support(web::http::methods::CONNECT,
      std::bind(&RestServer::handle_connect,
        this,
        std::placeholders::_1));
    mListener.support(web::http::methods::POST,
      std::bind(&RestServer::handle_post,
        this,
        std::placeholders::_1));
    mListener.support(web::http::methods::DEL,
      std::bind(&RestServer::handle_delete,
        this,
        std::placeholders::_1));

    mListener.open();
  }

  void RestServer::setGetHandler(HttpCallback aCallback)
  {
    mSignalGetRequest.connect(aCallback);
  }

  void RestServer::setConnectHandler(HttpCallback aCallback)
  {
    mSignalConnectRequest.connect(aCallback);
  }

  void RestServer::setPostHandler(HttpCallback aCallback)
  {
    mSignalPostRequest.connect(aCallback);
  }

  void RestServer::setDeleteHandler(HttpCallback aCallback)
  {
    mSignalDeleteRequest.connect(aCallback);
  }

  void RestServer::handle_get(web::http::http_request aRequest)
  {
    mSignalGetRequest(aRequest);
  }

  void RestServer::handle_connect(web::http::http_request aRequest)
  {
    mSignalConnectRequest(aRequest);
  }

  void RestServer::handle_post(web::http::http_request aRequest)
  {
    mSignalPostRequest(aRequest);
  }
  
  void RestServer::handle_delete(web::http::http_request aRequest)
  {
    mSignalDeleteRequest(aRequest);
  }
} // end namespace network
} // end namespace Ccommon
