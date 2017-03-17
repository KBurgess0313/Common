#include "Common/Network/Message/CameraMessage.h"

#include <string>
#include <iostream>

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

#include "Common/pod/Camera.h"


namespace common {
namespace network {
namespace message {

  CameraMessage::CameraMessage(const boost::property_tree::ptree& aMessage) :
    Base(aMessage),
    mCamera(nullptr)
  {
    try
    {
      boost::property_tree::ptree camTree = mMessage.get_child("Message.Cameras.Camera");
      mCamera = pod::CameraPtr(new pod::Camera(camTree));
    }
    catch(std::exception e)
    {
      std::cout << e.what();
    }
  }

  CameraMessage::CameraMessage(const pod::Camera& aCamera):
    Base(),
    mCamera(new pod::Camera(aCamera))
  {
    boost::property_tree::ptree cameraTree = mCamera->toXml();

    mMessage.put_child("Message.Cameras.Camera", cameraTree);
  }

  pod::CameraPtr CameraMessage::getCamera()
  {
    return mCamera;
  }

} //namespace message
} //namespace network
} //namespace common
