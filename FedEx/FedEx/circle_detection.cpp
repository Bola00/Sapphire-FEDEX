#include "circle_detection.h"

int detectAndCountCircles(cv::Mat image)
{
	if (image.empty()) {
		std::string error = "Webcam image is not opened or found. Please, repeate it!";
		cv::Mat errorImage = cv::Mat(200, 400, CV_8UC1);
		cv::putText(errorImage, error, cv::Point(10, 100), cv::FONT_HERSHEY_SIMPLEX, 0.4, cv::Scalar(0, 0, 0), 1);
		displayResultimage(errorImage);

		return -1;
	}

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
