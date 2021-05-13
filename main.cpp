#include <iostream>
#include "array"
#include "xtensor/xtensor.hpp"
#include "xtensor/xbuilder.hpp"
#include "xtensor/xarray.hpp"
#include "xtensor/xio.hpp"
#include "xtensor/xfixed.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"
#include "vector"
#include "thread"
#include "random"
#include "math.h"

using namespace cv;
using namespace std;

int funct1()
{
	xt::xarray<double> arr1
	{{1.0, 2.0, 3.0},
	{2.0, 5.0, 7.0},
	{2.0, 5.0, 7.0}};
	xt::xarray<double> arr2
	{5.0, 6.0, 7.0};
	xt::xarray<double> res = (arr1, 1) + arr2;
	cout << res;
	return 0;
}

int funct2()
{
	cout << " " << "This means it calls function 2" << endl;	
	// Read image in GrayScale mode
	Mat image = imread("../../Images/Flower1.jpg", 0);

	// Save grayscale image
	imwrite("Flower1.jpg", image);

	// To display the image
	imshow("Grayscale Image", image);
	waitKey(0);
	return 0;
}

int main()
{
funct1();
funct2();
return 0;

}
