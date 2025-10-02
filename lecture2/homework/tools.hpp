#pragma once
#include <opencv2/opencv.hpp>
void resizeAndCenterImage(const cv::Mat& input, cv::Mat& output, double& scale, cv::Point& offset);