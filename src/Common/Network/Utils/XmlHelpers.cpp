#include <Common/Network/Utils/XmlHelpers.h>

#include <sstream>

#include <boost/property_tree/xml_parser.hpp>

namespace common {
namespace network {
namespace utils {

namespace {
  namespace bp = boost::property_tree;
}

  message::types::Value getMessageType(bp::ptree aTree)
  {
    message::types::Value out = message::types::INVALID;

    if( aTree.get_child("Message").size() == 1)
    {
      bp::ptree::value_type val = aTree.get_child("Message").front();

      out = message::types::fromString(val.first);
    }

    return out;
  }

namespace xml {
  bp::ptree requestToXml(web::http::http_request aRequest)
  {
    std::istringstream temp(std::string(aRequest.extract_utf8string().get()));

    bp::ptree  out;

    bp::read_xml(temp, out);

    return out;
  }

  std::string xmlToString(bp::ptree aTree)
  {
    std::ostringstream ss;
    bp::write_xml(ss, aTree);

    return std::string(ss.str());
  }
} //end namespace xml
} //end namespace Utils
} //end namesapce network
} //end namespace Common
