#include "Common\Comms\Messages\Header.h"

namespace Common {
namespace Comms {
namespace Messages {

  Header::Header(Type aType,
                 UINT32 aNumBytes) :
    Parser(sizeOf()),
    mType(aType)
  {
    toBuf();
  }

  Header::Header(char* aBuf) :
    Parser(aBuf)
  {
    read<Type>(mType);
    read<UINT32>(mNumBytes);
  }
  
  UINT32 Header::sizeOf()
  {
    UINT32 size = sizeof(Type)+
                  sizeof(UINT16);

    return size;
  }

  void Header::toBuf()
  {
    write<Type>(mType);
    write<UINT32>(mNumBytes);
  }
} //namespace Message
} //namespace Comms
} //namespace Common