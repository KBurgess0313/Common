#include <Common/Interfaces/Utils/XmlHelpers.h>

#include <boost/property_tree/xml_parser.hpp>

namespace Common {
namespace Interfaces {
namespace Utils {

namespace {
  namespace bp = boost::property_tree;
}

  Messages::Types::Value getMessageType(bp::ptree aTree)
  {
    Messages::Types::Value out = Messages::Types::INVALID;

    if( aTree.get_child("Message").size() == 1)
    {
      bp::ptree::value_type val = aTree.get_child("Message").front();

      out = Messages::Types::fromString(val.first);
    }

    return out;
  }

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

} //end namespace Utils
} //end namesapce Interfaces
} //end namespace Common
