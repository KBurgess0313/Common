#include "Common/Interfaces/Messages/CameraMessage.h"
#include "Common/Types/CameraFeed.h"

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

#include <string>
#include <iostream>

namespace Common {
namespace Interfaces {
namespace Messages {

  CameraMessage::CameraMessage(const boost::property_tree::ptree& aMessage) :
    Base(aMessage),
    mCamera(nullptr)
  {
    try
    {
      boost::property_tree::ptree camTree = mMessage.get_child("Message.Cameras.Camera");
      mCamera = std::shared_ptr<Types::CameraFeed>(new Types::CameraFeed(camTree));
    }
    catch(std::exception e)
    {
      std::cout << e.what();
    }
  }

  CameraMessage::CameraMessage(const Types::CameraFeedPtr aCamera):
    Base(),
    mCamera(aCamera)
  {
    mMessage.put("Messages.Cameras.Camera.Name", mCamera->getName());
    mMessage.put("Messages.Cameras.Camera.Login", mCamera->getLogin());
    mMessage.put("Messages.Cameras.Camera.Passwd", mCamera->getPasswd());
    mMessage.put("Messages.Cameras.Camera.IpAddr", mCamera->getIpAddr());
  }

  Types::CameraFeedPtr CameraMessage::getCamera()
  {
    return mCamera;
  }

} //namespace Message
} //namespace Interfaces
} //namespace Common
