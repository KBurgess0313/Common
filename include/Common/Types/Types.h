#ifndef COMMON_TYPES_H
#define COMMON_TYPES_H

#include <boost\cstdint.hpp>
#include <cstring>
#include <string>

typedef int16_t INT16;
typedef uint16_t UINT16;

typedef int32_t INT32;
typedef uint32_t UINT32;

static const int STR_LENGTH = 20;

namespace Types
{
  struct String
  {
  public:
    String()
    {
      mString = new char[STR_LENGTH];
    }

    String(const std::string& aStr)
    {
      mString = new char[STR_LENGTH];
      std::memcpy(mString, aStr.c_str(), STR_LENGTH);
    }

    std::string toStdString()
    {
      return std::string(mString);
    }
  private:
    char *mString;
  };
}
#endif