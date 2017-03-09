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

  class CameraFeed : public QWidget
  {
    Q_OBJECT;

  public:
    CameraFeed(const std::string& aCameraLogin,
               const std::string& aCameraPass,
               const std::string& aCameraIp);

    CameraFeed(const boost::property_tree::ptree::value_type& cameraTree);

    void init();
    void terminate();

  signals:
    void cameraFrame(const QPixmap& aFrame);

  private:
    std::string constructTargetString(const std::string& aCameraLogin,
                                      const std::string& aCameraPass,
                                      const std::string& aCameraIp);

    void runCamera();

  private:
    bool mCameraActive;

    cv::VideoCapture mVideoStream;
    std::thread mWorkerThread;
  };

  typedef boost::shared_ptr<CameraFeed> CameraFeedPtr;
  typedef std::vector<CameraFeedPtr> CameraFeedPtrList;

} //namespace Types
} //namespace Common
#endif // CAMERAFEED_H
