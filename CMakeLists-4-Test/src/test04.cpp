#include <iostream>
#include "test04.h"
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;

int count(int x, int y){
	return x+y;
}

int main(){
	int m, n;
	m = 5; n = 8;
	cout << "m + n = " << count(m, n) << endl;

	cv::Mat M(2, 2, CV_8UC3, Scalar(0,0,255));
	cout << "M = " << endl << " " << M << endl << endl;

	cv::Mat M2 = (cv::Mat_<int>(2,3)<<1,3,5,7,9,11);
	cout << "M2 = " << endl << " " << M2 << endl << endl;

	Mat Z = Mat::zeros(2,2, CV_8UC1);
	cout << "Z = " << endl << " " << Z << endl << endl;

	cout << "===== end =====" <<endl;
	return 0;
}
