#include "fedex_project.h"
#include "circle_detection.h"
#include "database.h"

void questionnaireFramework()
{
	createDataBase();
	int eventID = eventID();
	cv::Mat timerImage = cv::Mat(200, 400, CV_8UC1);
	int detectedCircles;
	std::vector<int> questionResults;
	std::vector<std::string> baseQuestions = { "BASE_QUESTION_ONE", "BASE_QUESTION_TWO", "BASE_QUESTION_THREE" };
	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 5; j++) {
			if (cv::waitKey(1000) >= 0) {
				break;
			}
			cv::putText(timerImage, "Hands up! :)", cv::Point(100, 100), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(0, 0, 0), 2);
			displayTimerImage(timerImage);
			if (cv::waitKey(5000) >= 0) {
				break;
			}
			cv::destroyAllWindows();
			cv::Mat webCamImage = useWebcam();
			detectedCircles = detectAndCountCircles(webCamImage);
			if (detectedCircles == -1) {
				std::string error = "Webcam image is not opened or found. Please, repeate it!";
				cv::Mat errorImage = cv::Mat(200, 400, CV_8UC1);
				cv::putText(errorImage, error, cv::Point(10, 100), cv::FONT_HERSHEY_SIMPLEX, 0.4, cv::Scalar(0, 0, 0), 1);
				displayErrorImage(errorImage);
			}
			questionResults.push_back(detectedCircles);
		}
		insertData(eventID, baseQuestions[i], questionResults);
		questionResults.clear();
	}
	std::cout << "We finished the first section" << std::endl;
	std::cin.get();
	
	std::string previousImpactQuestion = "PREVIOUS_IMPACT";
	for (int i = 0; i < 9; i++) {
		if (cv::waitKey(1000) >= 0) {
			break;
		}
		cv::putText(timerImage, "Hands up! :)", cv::Point(100, 100), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(0, 0, 0), 2);
		displayTimerImage(timerImage);
		if (cv::waitKey(5000) >= 0) {
			break;
		}
		cv::destroyAllWindows();
		cv::Mat webCamImage = useWebcam();
		detectedCircles = detectAndCountCircles(webCamImage);
		if (detectedCircles == -1) {
			std::string error = "Webcam image is not opened or found. Please, repeate it!";
			cv::Mat errorImage = cv::Mat(200, 400, CV_8UC1);
			cv::putText(errorImage, error, cv::Point(10, 100), cv::FONT_HERSHEY_SIMPLEX, 0.4, cv::Scalar(0, 0, 0), 1);
			displayErrorImage(errorImage);
		}
		questionResults.push_back(detectedCircles);
	}
	insertData(eventID, previousImpactQuestion, questionResults);
	questionResults.clear();

	std::vector<std::string> aboutEventQuestions = { "ABOUT_EVENT_ONE", "ABOUT_EVENT_TWO", "ABOUT_EVENT_THREE", "ABOUT_EVENT_FOUR" };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 9; j++) {
			if (cv::waitKey(1000) >= 0) {
				break;
			}
			cv::putText(timerImage, "Hands up! :)", cv::Point(100, 100), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(0, 0, 0), 2);
			displayTimerImage(timerImage);
			if (cv::waitKey(5000) >= 0) {
				break;
			}
			cv::destroyAllWindows();
			cv::Mat webCamImage = useWebcam();
			detectedCircles = detectAndCountCircles(webCamImage);
			if (detectedCircles == -1) {
				std::string error = "Webcam image is not opened or found. Please, repeate it!";
				cv::Mat errorImage = cv::Mat(200, 400, CV_8UC1);
				cv::putText(errorImage, error, cv::Point(10, 100), cv::FONT_HERSHEY_SIMPLEX, 0.4, cv::Scalar(0, 0, 0), 1);
				displayErrorImage(errorImage);
			}
			questionResults.push_back(detectedCircles);
		}
		insertData(eventID, aboutEventQuestions[i], questionResults);
		questionResults.clear();
	}

	std::cout << "We finished the Second section" << std::endl;
	std::cin.get();

	std::vector<std::string> quiz = { "QUIZ_ONE", "QUIZ_TWO", "QUIZ_THREE", "QUIZ_FOUR", "QUIZ_FIVE", "QUIZ_SIX", "QUIZ_SEVEN" };
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 9; j++) {
			cv::Mat webCamImage = useWebcam();
			detectedCircles = detectAndCountCircles(webCamImage);
			if (detectedCircles == -1) {
				std::string error = "Webcam image is not opened or found. Please, repeate it!";
				cv::Mat errorImage = cv::Mat(200, 400, CV_8UC1);
				cv::putText(errorImage, error, cv::Point(10, 100), cv::FONT_HERSHEY_SIMPLEX, 0.4, cv::Scalar(0, 0, 0), 1);
				displayErrorImage(errorImage);
			}
			questionResults.push_back(detectedCircles);
		}
		insertData(eventID, quiz[i], questionResults);
		questionResults.clear();
	}
}