#include <iostream>
#include "array"
#include "xtensor/xtensor.hpp"
#include "xtensor/xbuilder.hpp"
#include "xtensor/xarray.hpp"
#include "xtensor/xio.hpp"
#include "xtensor/xfixed.hpp"
#include "opencv2/opencv.hpp"
#include "vector"

using namespace cv;
using namespace std;

int main()
{

xt::xarray<double> arr1
{
  {1.0, 2.0, 3.0},
  {2.0, 5.0, 7.0},
  {2.0, 5.0, 7.0}
};

xt::xarray<double> arr2
  {5.0, 6.0, 7.0};

xt::xarray<double> res = (arr1, 1) + arr2;
cout << res;


}
