#include "Common/Network/Message/LoginMessage.h"

#include <string>

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

namespace common {
namespace network {
namespace message {

  LoginMessage::LoginMessage(const boost::property_tree::ptree& aMessage) :
    Base(aMessage)
  {
    mLogin = mMessage.get<std::string>("Message.Login.UserName");
    mPasswd = mMessage.get<std::string>("Message.Login.Passwd");
  }

  LoginMessage::LoginMessage(const std::string& aLogin,
                             const std::string& aPasswd) :
    Base(),
    mLogin(aLogin),
    mPasswd(aPasswd)
  {
    mMessage.put("Message.Login.UserName", mLogin);
    mMessage.put("Message.Login.Passwd", mPasswd);
  }

  void LoginMessage::getLogin(std::string& aLogin,
                              std::string& aPasswd)
  {
    aLogin = mLogin;
    aPasswd = mPasswd;
  }

} //namespace Message
} //namespace network
} //namespace Common
