#include "Thread"
#include "videosource.h"
#include "opencv2/opencv.hpp"
#include "xtensor/xtensor.hpp"


using namespace cv;
using namespace std;

class HSVProcessor
{
    private: 
        VideoSource fVideoThread;
        Mat fprocessed_frame;
        Mat fHASV_frame;
        Mat fframe_threshold;
        const int fMaxValue = 255;
        const int fMaxValueH = 180;
        int flow_H = 17;
        int flow_S = 72;
        int flow_V = 123;
        int fHigh_H = 180;
        int fHigh_S = 255;
        int fHigh_V = 255;
        Mat ProessFrame;
        void Handle_input_frames();

    public:
        HSVProcessor(VideoSource inputReader);
        Mat get_processed_frame();
        VideoSource get_video_thread();
        Mat get_HSV_frame();
        int  get_max_value();
        int get_high_value_H();
        int get_low_H();
        int get_low_S();
        int get_low_V();
        int get_high_H();
        int get_high_S();
        int get_high_V();
        int set_low_H();
        int set_low_S();
        int set_low_S();
        int set_high_H();
        int set_high_S();
        int set_high_V();
};