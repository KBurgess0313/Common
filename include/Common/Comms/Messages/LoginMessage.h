#ifndef COMMON_COMMS_MESSAGES_LOGIN_H
#define COMMON_COMMS_MESSAGES_LOGIN_H

#include "Common\Comms\Messages\Header.h"
#include "Common\Comms\Messages\Parser.h"

namespace Common {
namespace Comms {
namespace Messages {

  class Login : public Parser
  {
  public:
    Login(char* aBuf);

    Login(const std::string& aLogin,
          const std::string& aPasswd);

    void getLogin(std::string& aLogin,
                  std::string& aPasswd);

    char* getStream();

  private:
    void toBuf();
    UINT32 sizeOf();

  private:
    Types::String mLogin;
    Types::String mPasswd;
  };

} //namespace Messages
} //namespace Comms
} //namespace Common
#endif