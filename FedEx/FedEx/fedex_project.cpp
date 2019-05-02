#include "fedex_project.h"
#include "circle_detection.h"

void questionnaireFramework()
{
	cv::Mat webCamImage = useWebcam();
	int detectedCircles = detectAndCountCircles(webCamImage);
	if (detectedCircles = -1) {
		std::string error = "Webcam image is not opened or found. Please, repeate it!";
		cv::Mat errorImage = cv::Mat(200, 400, CV_8UC1);
		cv::putText(errorImage, error, cv::Point(10, 100), cv::FONT_HERSHEY_SIMPLEX, 0.4, cv::Scalar(0, 0, 0), 1);
		displayResultimage(errorImage);
	}
}
