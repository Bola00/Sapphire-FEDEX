#include <string>
#include <vector> 
#include <iostream> 
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/features2d.hpp>
#include <opencv2/imgproc.hpp>
// development

int main(int argc, const char** argv)
{
	// simple unit test example
	//std::cout << simpleAdd(2, 3) << std::endl;

	// simple opencv example
	cv::Mat selfie;
	cv::VideoCapture webCam;
	webCam.open(0);

	webCam >> selfie;

	cv::namedWindow("Selfie", cv::WINDOW_NORMAL);
	cv::imshow("Selfie", selfie);


	cv::waitKey(0);
	return 0;
}

