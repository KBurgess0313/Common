#ifndef COMMON_COMMS_MESSAGES_LOGIN_H
#define COMMON_COMMS_MESSAGES_LOGIN_H

#include "Common/Network/Message/BaseMessage.h"

#include <boost/property_tree/ptree.hpp>

#include <string>

namespace common {
namespace network {
namespace message {

  class LoginMessage : public Base
  {
  public:
    LoginMessage(const boost::property_tree::ptree& aMessage);

    LoginMessage(const std::string& aLogin,
                 const std::string& aPasswd);

    void getLogin(std::string& aLogin,
                  std::string& aPasswd);
  private:
    std::string mLogin;
    std::string mPasswd;
  };

} //namespace messages
} //namespace network
} //namespace Common

#endif //COMMON_COMMS_MESSAGES_LOGIN_H
