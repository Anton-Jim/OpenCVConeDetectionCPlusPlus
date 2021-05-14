#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/opencv.hpp"
#include "Thread"

using namespace cv;
using namespace std;

class VideoSource
{
protected:
    Mat fRGBFrame;
    Mat fDepthFrame;   
public:
    VideoSource();
    ~VideoSource();
    virtual Mat GetVideo();
    virtual Mat GetDepth();
    void CollectFrames();
};