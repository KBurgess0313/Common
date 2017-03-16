#ifndef COMMON_CAMERAFEED_H
#define COMMON_CAMERAFEED_H

#include <opencv2/opencv.hpp>

#include <QWidget>
#include <QPixmap>

#include <boost/property_tree/ptree.hpp>
#include <boost/shared_ptr.hpp>

#include <vector>
#include <thread>

namespace Common {
namespace Types {

  class CameraFeed
  {

  public:
    CameraFeed(const std::string& aCameraName, 
               const std::string& aCameraLogin,
               const std::string& aCameraPass,
               const std::string& aCameraIp);

    CameraFeed(const boost::property_tree::ptree& cameraTree);

    void init();
    void terminate();

    std::string getName();
    std::string getLogin();
    std::string getPasswd();
    std::string getIpAddr();

  private:
    std::string constructTargetString();

    void runCamera();

  private:
    std::string mName;
    std::string mLogin;
    std::string mPasswd;
    std::string mIpAddr;

    bool mCameraActive;

    cv::VideoCapture mVideoStream;
    std::thread mWorkerThread;
  };

  typedef std::shared_ptr<CameraFeed> CameraFeedPtr;
  typedef std::vector<CameraFeedPtr> CameraFeedPtrList;

} //namespace Types
} //namespace Common
#endif // CAMERAFEED_H
