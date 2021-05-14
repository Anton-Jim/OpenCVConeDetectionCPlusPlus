#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/opencv.hpp"
#include "VideoSource.h"
#include "thread"

using namespace cv;
using namespace std;

VideoSource::VideoSource() 
{
    fRGBFrame = NULL;
    fDepthFrame = NULL;
    thread VideoReader (CollectFrames);
    VideoReader.join ();
}
VideoSource::~VideoSource() {
    
}

void VideoSource::CollectFrames()
{
    while(true) {
        fRGBFrame = GetVideo();
        fDepthFrame = GetDepth();
    } 
}