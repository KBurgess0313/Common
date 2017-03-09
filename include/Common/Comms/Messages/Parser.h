#ifndef COMMON_COMMS_MESSAGES_PARSER_H
#define COMMON_COMMS_MESSAGES_PARSER_H

#include <Common/Types/Types.h>

namespace Common {
namespace Comms {
namespace Messages {

  class Parser
  {
  public:
    Parser(char* buf);
    Parser(UINT32 aSize);
    Parser(){};

    virtual char* getStream();

  protected:
    template <typename T>
    void read(T & var);

    template <typename T>
    void write(T & var);

  private:
    virtual void toBuf() = 0;
    virtual UINT32 sizeOf() = 0;

  protected:
    char* mBuffer;

  private:
    UINT32 mBufferLength;
    UINT32 mCurrentIndex;
  };
} //namespace Message
} //namespace Comms
} //namespace Common
#endif