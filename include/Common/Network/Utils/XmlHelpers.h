#ifndef COMMON_NETWORK_UTILS_XMLHELPERS_H
#define COMMON_NETWORK_UTILS_XMLHELPERS_H

#include "Common/Network/Message/MessageTypes.h"

#include <boost/property_tree/ptree.hpp>
#include <cpprest/http_msg.h>

#include <string>

namespace common {
namespace network {
namespace utils {

message::types::Value getMessageType(boost::property_tree::ptree aTree);
boost::property_tree::ptree requestToXml(web::http::http_request aRequest);
std::string xmlToString(boost::property_tree::ptree aTree);

} //end namespace utils
} //end namesapce network
} //end namespace Common

#endif //COMMON_NETWORK_UTILS_XMLHELPERS_H
