#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/features2d.hpp>
#include <opencv2/imgproc.hpp>
#include <string>
#include <iostream> 
#include <vector>

#ifndef H_CIRCLE_DETECTION
#define H_CIRCLE_DETECTION

cv::Mat useWebcam();
void displayTimerImage(cv::Mat image);
void displayErrorImage(cv::Mat image);
int detectAndCountCircles(cv::Mat image);

#endif
