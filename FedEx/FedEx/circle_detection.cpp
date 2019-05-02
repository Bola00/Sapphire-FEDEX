#include "circle_detection.h"

int detectAndCountCircles(cv::Mat image)
{
	int detectedCircles = 0;
	displayResultimage(image);

	return detectedCircles;
}
cv::Mat useWebcam()
{
	cv::Mat webCamImage;
	cv::VideoCapture webCam;
	webCam.open(0);
	webCam >> webCamImage;

	return webCamImage;
}
void displayResultimage(cv::Mat image)
{
	cv::namedWindow("Circles", cv::WINDOW_AUTOSIZE);
	cv::imshow("Circles", image);
	cv::waitKey(0);
}
