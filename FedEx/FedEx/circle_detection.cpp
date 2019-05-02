#include "circle_detection.h"

int detectAndCountCircles(cv::Mat image)
{
	if (image.empty()) {

		return -1;
	}

	//Define local variables
	cv::Mat cloneImage, grayScaleImage, supportImage;
	int detectedCircles, coordinateX, coordinateY, radius;
	detectedCircles = 0;
	std::vector<cv::Vec3f> circles;
	cloneImage = image.clone();
	//Blur image
	GaussianBlur(image, image, cv::Size(5, 5), 1, 0);
	//Delete blue and red colors
	for (int y = 0; y < image.rows; y++) {
		for (int x = 0; x < image.cols; x++) {
			cv::Vec3b &color = image.at<cv::Vec3b>(cv::Point(x, y));
			if (color[1] > color[0] && color[1] > color[2])	{
				color[0] = 0;
				color[2] = 0;
				/*if (color[1] < 50) {
					color[1] = 0;
				}*/
			} else {
				color[0] = 0;
				color[1] = 0;
				color[2] = 0;
			}		
		}
	}
	//Transform to one-channel gray-scale image
	cvtColor(image, grayScaleImage, cv::COLOR_BGR2GRAY);
	//Use Hough transform
	HoughCircles(grayScaleImage, circles, cv::HOUGH_GRADIENT, 1, grayScaleImage.rows / 40, 30, 15, grayScaleImage.rows / 60, grayScaleImage.rows / 25);

	detectedCircles = 0;
	for (int i = 0; i < circles.size(); i++) {
		coordinateX = cvRound(circles[i][0]);
		coordinateY = cvRound(circles[i][1]);
		radius = cvRound(circles[i][2]);
		cv::Point center(coordinateX, coordinateY);
		//Draw circles
		circle(cloneImage, center, radius, cv::Scalar(0, 255, 255), 3, 4, 0);
		detectedCircles++;
	}
	displayResultimage(cloneImage);
	//displayResultimage(grayScaleImage);

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
	cv::namedWindow("Circles", cv::WINDOW_NORMAL);
	cv::imshow("Circles", image);
	cv::waitKey(0);
}
