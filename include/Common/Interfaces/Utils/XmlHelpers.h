#ifndef COMMON_INTERFACES_UTILS_XMLHELPERS_H
#define COMMON_INTERFACES_UTILS_XMLHELPERS_H

#include "Common/Interfaces/Messages/Types.h"

#include <boost/property_tree/ptree.hpp>
#include <cpprest/http_msg.h>

#include <string>

namespace Common {
namespace Interfaces {
namespace Utils {

Messages::Types::Value getMessageType(boost::property_tree::ptree aTree);
boost::property_tree::ptree requestToXml(web::http::http_request aRequest);
std::string xmlToString(boost::property_tree::ptree aTree);

} //end namespace Utils
} //end namesapce Interfaces
} //end namespace Common

#endif
