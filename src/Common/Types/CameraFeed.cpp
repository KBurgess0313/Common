#include "Common\Types\CameraFeed.h"

namespace Common {
namespace Types {

  CameraFeed::CameraFeed(const std::string& aCameraName,
                         const std::string& aCameraLogin,
                         const std::string& aCameraPass,
                         const std::string& aCameraIp) :
    QWidget(),
    mName(aCameraName),
    mCameraActive(false),
    mVideoStream(cv::VideoCapture(constructTargetString(aCameraLogin, aCameraPass, aCameraIp)))
  {
  }

  CameraFeed::CameraFeed(const boost::property_tree::ptree::value_type& cameraTree) :
    QWidget()
  {
    std::string name = "";
    std::string login = "";
    std::string pass = "";
    std::string ip = "";

    try
    {
      name = cameraTree.second.get<std::string>("Name");
      login = cameraTree.second.get<std::string>("Login");
      pass  = cameraTree.second.get<std::string>("Passwd");
      ip    = cameraTree.second.get<std::string>("IpAddr");
    }
    catch(std::exception e)
    {
      std::cout << "Handled error: " << e.what() << "\n";
    }

    mName = name; 
    mCameraActive = false;
    mVideoStream = cv::VideoCapture(constructTargetString(login, pass, ip));
  }

  void CameraFeed::init()
  {
    mCameraActive = true;

    if(mVideoStream.isOpened())
    {
      std::cout << "Stream opened\n";

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
  std::string CameraFeed::constructTargetString(const std::string& aCameraLogin,
                                                const std::string& aCameraPass,
                                                const std::string& aCameraIp)
  {
    std::string target = "rtsp://" + aCameraLogin + ":" + aCameraPass + "@" + aCameraIp + "/live/ch0";

    std::cout << "Target string: \n" << target << "\n";
    return target;
  }

  void CameraFeed::runCamera()
  {
    cv::Mat frame;
    cv::Mat colorFrame;

    while(mVideoStream.read(frame))
    {
      cv::cvtColor(frame, colorFrame, cv::COLOR_BGR2RGB);

      QImage img = QImage((unsigned char*)colorFrame.data, 
                                          colorFrame.cols, 
                                          colorFrame.rows, 
                                          QImage::Format_RGB888);

      QPixmap newFrame = QPixmap::fromImage(img);

      emit cameraFrame(newFrame);

      cv::waitKey(30);
    }
  }

} //namespace Types
} //namespace Common