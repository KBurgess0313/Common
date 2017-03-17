#ifndef COMMON_NETWORK_MESSAGE_TYPES
#define COMMON_NETWORK_MESSAGE_TYPES

#include <string>

namespace common {
namespace network {
namespace message {
namespace types {

  enum Value 
  {
    INVALID = 0,
    LOGIN,
    ACCOUNT,
    CAMERA
  };

  std::string toString(const Value aType);

  Value fromString(const std::string& aType);

} //end namespace types
} //end namespace message
} //end namespace network
} //end namespace Common
#endif //COMMON_NETWORK_MESSAGE_TYPES
