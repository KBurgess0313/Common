#ifndef COMMON_NETWORK_MESSAGE_BASE_H
#define COMMON_NETWORK_MESSAGE_BASE_H

#include <boost/property_tree/ptree.hpp>

#include <string>

namespace common {
namespace network {
namespace message {

  class Base
  {
  public:
    Base(const boost::property_tree::ptree& aMessage);
    Base();

    std::string constructMessage();

  protected:
    boost::property_tree::ptree mMessage;
  };

} //namespace message
} //namespace network
} //namespace common

#endif //COMMON_NETWORK_MESSAGE_BASE_H
