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
    ACCOUNT,
    CAMERA
  };

  std::string toString(const Value aType);

  Value fromString(const std::string& aType);

} //end namespace Types
} //end namespace Messages
} //end namespace Interfaces
} //end namespace Common
#endif
