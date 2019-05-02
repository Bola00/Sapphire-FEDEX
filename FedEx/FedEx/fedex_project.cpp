#include "fedex_project.h"
#include "circle_detection.h"

void questionnaireFramework()
{
	cv::Mat webCamImage = useWebcam();
	int detectedCircles = detectAndCountCircles(webCamImage);
}
