#include "Common/Interfaces/TcpRestServer.h"
#include "Common/Interfaces/Messages/Types.h"
#include "Common/Types/Types.h"

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

#include <string>

namespace Common {
namespace Interfaces {

  TcpRestServer::TcpRestServer(const web::http::uri& aHostUrl) :
    mListener(web::http::experimental::listener::http_listener(aHostUrl))
  {
    mListener.support(web::http::methods::GET,
      std::bind(&TcpRestServer::handle_get,
        this,
        std::placeholders::_1));
    mListener.support(web::http::methods::CONNECT,
      std::bind(&TcpRestServer::handle_connect,
        this,
        std::placeholders::_1));
    mListener.support(web::http::methods::POST,
      std::bind(&TcpRestServer::handle_post,
        this,
        std::placeholders::_1));
    mListener.support(web::http::methods::DEL,
      std::bind(&TcpRestServer::handle_delete,
        this,
        std::placeholders::_1));

    mListener.open();
  }

  void TcpRestServer::setGetHandler(RestCallback aCallback)
  {
    mGetSignal.connect(aCallback);
  }

  void TcpRestServer::setConnectHandler(RestCallback aCallback)
  {
    mConnectSignal.connect(aCallback);
  }

  void TcpRestServer::setPostHandler(RestCallback aCallback)
  {
    mPostSignal.connect(aCallback);
  }

  void TcpRestServer::setDeleteHandler(RestCallback aCallback)
  {
    mDeleteSignal.connect(aCallback);
  }

  void TcpRestServer::handle_get(web::http::http_request aRequest)
  {
    mGetSignal(aRequest);
  }

  void TcpRestServer::handle_connect(web::http::http_request aRequest)
  {
    mConnectSignal(aRequest);
  }

  void TcpRestServer::handle_post(web::http::http_request aRequest)
  {
    mPostSignal(aRequest);
  }
  
  void TcpRestServer::handle_delete(web::http::http_request aRequest)
  {
    mDeleteSignal(aRequest);
  }
} // end namespace Interfaces
} // end namespace Common
