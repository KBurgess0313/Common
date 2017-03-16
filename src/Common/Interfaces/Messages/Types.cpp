#include "Common/Interfaces/Messages/Types.h"

#include <iostream>

namespace Common {
namespace Interfaces {
namespace Messages {
namespace Types {

  std::string toString(const Value aType)
  {
    std::string out = "Invalid";

    switch (aType)
    {
    case LOGIN:
      out = "Login";
      break;
    case ACCOUNT:
      out = "Account";
      break;
    case CAMERA:
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
    else if (aType == "Account")
    {
      out = ACCOUNT;
    }
    else if (aType == "Cameras")
    {
      out = CAMERA;
    }
    else
    {
      std::cout << "Received Invalid Message Type: " << aType << "\n";
    }

    return out;
  }

} //end namespace Types
} //end namespace Messages
} //end namespace Interfaces
} //end namespace Common
