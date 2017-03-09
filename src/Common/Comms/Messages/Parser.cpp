#include "Common/Comms/Messages/Parser.h"

namespace Common {
namespace Comms {
namespace Messages {

  Parser::Parser(char* buf)
  {
    mBuffer = buf;
    mCurrentIndex = 0;
  }

  Parser::Parser(UINT32 aSize)
  {
    mBuffer = new char[aSize];
    mCurrentIndex = 0;
  }

  char* Parser::getStream()
  {
    return mBuffer;
  }

  template <typename T>
  void Parser::read(T & var)
  {
    T * pInt = dynamic_cast<T*>(mBuffer + mCurrentIndex);
    var = *pInt;
    mCurrentIndex += sizeof(T);
  };

  template <typename T>
  void Parser::write(T & var)
  {
    std::memcpy(mBuffer + mCurrentIndex, &var, sizeof(T));
    mCurrentIndex += sizeof(T);
  }
} //namespace Messages
} //namespace Comms
} //namespace Common