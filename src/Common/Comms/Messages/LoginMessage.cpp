#include "Common\Comms\Messages\LoginMessage.h"

#include "Common\Comms\Messages\Header.h"

namespace Common {
namespace Comms {
namespace Messages {

  Login::Login(char* aBuf) :
    Parser(aBuf)
  {
    read<Types::String>(mLogin);
    read<Types::String>(mPasswd);
  }

  Login::Login(const std::string& aLogin,
               const std::string& aPasswd) :
    Parser(sizeOf()),
    mLogin(aLogin),
    mPasswd(aPasswd)
  {
    toBuf();
  }

  char* Login::getStream()
  {
    Header head = Header(Type::LOGIN, sizeOf());

    UINT32 headerSize = head.sizeOf();
    UINT32 messageSize = sizeOf();
    UINT32 bufferSize = headerSize + messageSize;

    char* buf = new char[bufferSize];

    std::memcpy(buf, head.getStream(), headerSize);
    std::memcpy(buf + headerSize, mBuffer, messageSize);

    return buf;
  }

  void Login::getLogin(std::string& aLogin,
                       std::string& aPasswd)
  {
    aLogin = mLogin.toStdString();
    aPasswd = mPasswd.toStdString();
  }

  void Login::toBuf()
  {
    write<Types::String>(mLogin);
    write<Types::String>(mPasswd);
  }

  UINT32 Login::sizeOf()
  {
    UINT32 size = sizeof(Types::String) + sizeof(Types::String);
    return size;
  }

} //namespace Message
} //namespace Comms
} //namespace Common