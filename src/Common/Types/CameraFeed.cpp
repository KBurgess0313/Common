#include "Common/Types/CameraFeed.h"

#include <opencv2/highgui.hpp>
#include <opencv2/core/core.hpp>

#include <chrono>

namespace Common {
namespace Types {

  CameraFeed::CameraFeed(const std::string& aCameraName,
                         const std::string& aCameraLogin,
                         const std::string& aCameraPass,
                         const std::string& aCameraIp) :
    mName(aCameraName),
    mLogin(aCameraLogin),
    mPasswd(aCameraPass),
    mIpAddr(aCameraIp),
    mCameraActive(false),
    mVideoStream(cv::VideoCapture(constructTargetString()))
  {
  }

  CameraFeed::CameraFeed(const boost::property_tree::ptree& cameraTree)
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

    mCameraActive = false;
    mVideoStream = cv::VideoCapture(constructTargetString());
  }

  void CameraFeed::init()
  {
    mCameraActive = true;

    if(mVideoStream.isOpened())
    {
      std::cout << "Stream opened\n";

      mVideoStream.set(CV_CAP_PROP_FRAME_WIDTH, static_cast<double>(640));
      std::cout << "Width2: " << mVideoStream.get(CV_CAP_PROP_FRAME_WIDTH) << "\n";
      std::cout << "Height: " << mVideoStream.get(CV_CAP_PROP_FRAME_HEIGHT) << "\n";

      mWorkerThread = std::thread(&CameraFeed::runCamera, this);
    }
  }

  void CameraFeed::terminate()
  {
    mCameraActive = false;
    mWorkerThread.join();
  }

  std::string CameraFeed::getName()
  {
    return mName;
  }

  std::string CameraFeed::getLogin()
  {
    return mLogin;
  }

  std::string CameraFeed::getPasswd()
  {
    return mPasswd;
  }

  std::string CameraFeed::getIpAddr()
  {
    return mIpAddr;
  }

  std::string CameraFeed::constructTargetString()
  {
    std::string target = "rtsp://" + mLogin + ":" + mPasswd + "@" + mIpAddr + "/live/ch0";

    return target;
  }

  void CameraFeed::runCamera()
  {
    cv::Mat frame;
 //   cv::Mat colorFrame;

    cv::namedWindow(mName);

    clock_t begin = clock();

    int time = 5;
    int frameCount = 0;

    while(mVideoStream.read(frame))
    {
     // cv::cvtColor(frame, colorFrame, cv::COLOR_BGR2RGB);

      cv::imshow(mName, frame);
      cv::waitKey(10);
    }
  }

} //namespace Types
} //namespace Common
