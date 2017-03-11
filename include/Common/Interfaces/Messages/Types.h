#ifndef COMMON_INTERFACES_MESSAGES_TYPES
#define COMMON_INTERFACES_MESSAGES_TYPES

#include <string>

namespace Common {
namespace Interfaces {
namespace Messages {
namespace Types {

  enum Value 
  {
    INVALID = 0,
    LOGIN,
    ACCOUNTS,
    CAMERAS
  };

  std::string toString(const Value aType)
  {
    std::string out = "Invalid";

    switch (aType)
    {
    case LOGIN:
      out = "Login";
      break;
    case ACCOUNTS:
      out = "Accounts";
      break;
    case CAMERAS:
      out = "Cameras";
      break;
    default:
      out = "Invalid";
    }

    return out;
  }

  Value fromString(const std::string& aType)
  {
    Value out = INVALID;
    if (aType == "Login")
    {
      out = LOGIN;
    }
    else if (aType == "Accounts")
    {
      out = ACCOUNTS;
    }
    else if (aType == "Cameras")
    {
      out = CAMERAS;
    }

    return out;
  }

} //end namespace Types
} //end namespace Messages
} //end namespace Interfaces
} //end namespace Common
#endif