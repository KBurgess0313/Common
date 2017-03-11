#ifndef COMMON_COMMS_MESSAGES_BASE_H
#define COMMON_COMMS_MESSAGES_BASE_H

#include <boost\property_tree\ptree.hpp>

#include <string>

namespace Common {
namespace Interfaces {
namespace Messages {

  class Base
  {
  public:
    Base(const boost::property_tree::ptree& aMessage);
    Base();

    std::string& constructMessage();

  protected:
    boost::property_tree::ptree mMessage;
  };

} //namespace Messages
} //namespace Interfaces
} //namespace Common
#endif