#ifndef COMMON_POD_CAMERA_H
#define COMMON_POD_CAMERA_H

#include <vector>
#include <thread>

#include <boost/property_tree/ptree.hpp>
#include <boost/shared_ptr.hpp>

namespace common {
namespace pod {

  class Camera
  {
  public:
    Camera(const std::string& aCameraName,
           const std::string& aCameraLogin,
           const std::string& aCameraPass,
           const std::string& aCameraIp);

    Camera(const boost::property_tree::ptree& cameraTree);
    Camera(const Camera& aRhs);

    boost::property_tree::ptree toXml();

    std::string getName();
    std::string getLogin();
    std::string getPasswd();
    std::string getIpAddr();

  private:
    std::string mName;
    std::string mLogin;
    std::string mPasswd;
    std::string mIpAddr;
  };

  typedef std::shared_ptr<Camera> CameraPtr;
  typedef std::vector<CameraPtr> CameraPtrList;

} //namespace Types
} //namespace Common
#endif // COMMON_POD_CAMERA_H
