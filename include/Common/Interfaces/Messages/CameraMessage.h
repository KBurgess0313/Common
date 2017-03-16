#ifndef COMMON_COMMS_MESSAGES_CAMERA_H
#define COMMON_COMMS_MESSAGES_CAMERS_H

#include "Common/Interfaces/Messages/BaseMessage.h"

#include <boost/property_tree/ptree.hpp>

#include <string>

namespace Common {

  namespace Types
  {
    class CameraFeed;
    typedef std::shared_ptr<CameraFeed> CameraFeedPtr;
  }

namespace Interfaces {
namespace Messages {

  class CameraMessage : public Base
  {
  public:
    CameraMessage(const boost::property_tree::ptree& aMessage);

    CameraMessage(const Types::CameraFeedPtr aCamera);

    Types::CameraFeedPtr getCamera();

  private:
    CameraMessage();

  private:
    Types::CameraFeedPtr mCamera;
  };

} //namespace Messages
} //namespace Interfaces
} //namespace Common

#endif

