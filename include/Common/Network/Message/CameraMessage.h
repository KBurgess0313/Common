#ifndef COMMON_COMMS_MESSSAGE_CAMERA_H
#define COMMON_COMMS_MESSSAGE_CAMERA_H

#include "Common/Network/Message/BaseMessage.h"

#include <string>

#include <boost/property_tree/ptree.hpp>

namespace common {

namespace pod
{
  class Camera;
  typedef std::shared_ptr<Camera> CameraPtr;
}

namespace network {
namespace message {

  class CameraMessage : public Base
  {
  public:
    CameraMessage(const boost::property_tree::ptree& aMessage);
    CameraMessage(const pod::Camera& aCamera);

    pod::CameraPtr getCamera();

  private:
    CameraMessage();

  private:
    pod::CameraPtr mCamera;
  };

} //namespace message
} //namespace network
} //namespace Common

#endif //COMMON_COMMS_MESSSAGE_CAMERA_H

