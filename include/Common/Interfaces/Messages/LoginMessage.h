#ifndef COMMON_COMMS_MESSAGES_LOGIN_H
#define COMMON_COMMS_MESSAGES_LOGIN_H

#include "Common/Interfaces/Messages/BaseMessage.h"

#include <boost/property_tree/ptree.hpp>

#include <string>

namespace Common {
namespace Interfaces {
namespace Messages {

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

} //namespace Messages
} //namespace Interfaces
} //namespace Common
#endif