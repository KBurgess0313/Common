#include "Common/Network/Message/MessageTypes.h"

#include <iostream>
#include <string>

namespace common {
namespace network {
namespace message {
namespace types {

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

} //end namespace types
} //end namespace message
} //end namespace network
} //end namespace common
