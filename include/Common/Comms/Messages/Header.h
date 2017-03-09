#ifndef COMMON_MESSAGE_H
#define COMMON_MESSAGE_H

#include "Common\Comms\Messages\Parser.h"
#include "Common\Types\Types.h"

namespace Common {
namespace Comms {
namespace Messages {

  enum Type
  {
    LOGIN,
    FETCH_CAMERAS,
    ADD_CAMERA,
    ADD_USER
  };

  class Header : public Parser
  {
  public:
    Header(Type aType,
           UINT32 aNumBytes);

    Header(char* aBuf);

    Header(){};
    UINT32 sizeOf();

  private:
    void toBuf();

  private:
    Type mType;
    UINT32 mNumBytes;
  };

} //namespace Message
} //namespace Comms
} //namespace Common
#endif