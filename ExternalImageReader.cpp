#include "opencv2/opencv.hpp"
#include "VideoSource.h"

using namespace cv;
using namespace std;

class ExternalImageReader: VideoSource 
{
    private:
        string fImageSource;
    public:
        ExternalImageReader(string imagesource): VideoSource()
        {
             fImageSource = imagesource;
        }

        Mat GetVideo(){
            return imread(fImageSource, 0);
        }

        /*Mat GetDepth(){
           
        }*/
};
