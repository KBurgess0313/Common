#include "Common/pod/Camera.h"

#include <iostream>
namespace common {
namespace pod {

  Camera::Camera(const std::string& aCameraName,
                 const std::string& aCameraLogin,
                 const std::string& aCameraPass,
                 const std::string& aCameraIp) :
    mName(aCameraName),
    mLogin(aCameraLogin),
    mPasswd(aCameraPass),
    mIpAddr(aCameraIp)
  {
  }

  Camera::Camera(const boost::property_tree::ptree& cameraTree)
  {
    try
    {
      mName   = cameraTree.get<std::string>("Name");
      mLogin  = cameraTree.get<std::string>("Login");
      mPasswd = cameraTree.get<std::string>("Passwd");
      mIpAddr = cameraTree.get<std::string>("IpAddr");
    }
    catch(std::exception e)
    {
      std::cout << "Handled error: " << e.what() << "\n";
    }
  }

  Camera::Camera(const Camera& aRhs)
  {
    mName   = aRhs.mName;
    mLogin  = aRhs.mLogin;
    mPasswd = aRhs.mPasswd;
    mIpAddr = aRhs.mIpAddr;
  }

  boost::property_tree::ptree Camera::toXml()
  {
    boost::property_tree::ptree out;

    out.put("Name", mName);
    out.put("Login", mLogin);
    out.put("Passwd", mPasswd);
    out.put("IpAddr", mIpAddr);

    return out;
  }

  std::string Camera::getName()
  {
    return mName;
  }

  std::string Camera::getLogin()
  {
    return mLogin;
  }

  std::string Camera::getPasswd()
  {
    return mPasswd;
  }

  std::string Camera::getIpAddr()
  {
    return mIpAddr;
  }

} //namespace pod
} //namespace common
