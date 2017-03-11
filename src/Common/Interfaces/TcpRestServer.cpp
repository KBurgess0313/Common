#include "Common/Interfaces/TcpRestServer.h"
#include "Common/Interfaces/Messages/Types.h"
#include "Common/Types/Types.h"

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

#include <string>

namespace Common {
namespace Interfaces {

  TcpRestServer::TcpRestServer(const web::http::uri& aHostUrl) :
    m_listener(web::http::experimental::listener::http_listener(aHostUrl))

  {
    m_listener.support(web::http::methods::GET,
      std::tr1::bind(&TcpRestServer::handle_get,
        this,
        std::tr1::placeholders::_1));
    m_listener.support(web::http::methods::CONNECT,
      std::tr1::bind(&TcpRestServer::handle_connect,
        this,
        std::tr1::placeholders::_1));
    m_listener.support(web::http::methods::POST,
      std::tr1::bind(&TcpRestServer::handle_post,
        this,
        std::tr1::placeholders::_1));

    m_listener.support(web::http::methods::DEL,
      std::tr1::bind(&TcpRestServer::handle_delete,
        this,
        std::tr1::placeholders::_1));
  }

  void TcpRestServer::handle_get(web::http::http_request aRequest)
  {
    Concurrency::task<utility::string_t> requestStr = aRequest.extract_string();
    std::string getType = utility::conversions::to_utf8string(requestStr.get());

  }

  void TcpRestServer::handle_connect(web::http::http_request aRequest)
  {

  }

  void TcpRestServer::handle_post(web::http::http_request aRequest)
  {
    using namespace boost::property_tree;
    /*
    Concurrency::task<utility::string_t> requestStr = aRequest.extract_string();
    const std::string& xmlString = utility::conversions::to_utf8string(requestStr.get());

    std::istringstream xmlStringStream;
    xmlStringStream.str(xmlString);

    ptree xmlTree;
    read_xml(xmlStringStream, xmlTree);

    for (const ptree::value_type& value : xmlTree.get_child("Message"))
    {
      Messages::Types::Value type = Messages::Types::fromString(value.first);


    }
    */
  }
  
  void TcpRestServer::handle_delete(web::http::http_request aRequest)
  {

  }
} // end namespace Interfaces
} // end namespace Common