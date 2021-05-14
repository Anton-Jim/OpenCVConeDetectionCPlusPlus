#include "Thread"
#include "videosource.h"
#include "opencv2/opencv.hpp"
#include "xtensor/xtensor.hpp"
#include "HSVProcessor.h"

using namespace cv;
using namespace std;

HSVProcessor::HSVProcessor(VideoSource inputReader){}
Mat HSVProcessor::get_processed_frame(){}
VideoSource HSVProcessor::get_video_thread(){}
Mat HSVProcessor::get_HSV_frame(){}
int HSVProcessor::get_max_value(){}
int HSVProcessor::get_high_value_H(){}
int HSVProcessor::get_low_H(){}
int HSVProcessor::get_low_S(){}
int HSVProcessor::get_low_V(){}
int HSVProcessor::get_high_H(){}
int HSVProcessor::get_high_S(){}
int HSVProcessor::get_high_V(){}
int HSVProcessor::set_low_H(){}
int HSVProcessor::set_low_S(){}
int HSVProcessor::set_low_S(){}
int HSVProcessor::set_high_H(){}
int HSVProcessor::set_high_S(){}
int HSVProcessor::set_high_V(){}