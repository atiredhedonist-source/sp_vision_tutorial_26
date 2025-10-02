#include "tools.hpp"
void resizeAndCenterImage(const cv::Mat& input, cv::Mat& output, double& scale, cv::Point& offset) {
    cv::Size targetSize(640, 640);
    double scaleX = static_cast<double>(targetSize.width) / input.cols;
    double scaleY = static_cast<double>(targetSize.height) / input.rows;
    scale = std::min(scaleX, scaleY);
    cv::Size scaledSize(static_cast<int>(input.cols * scale), static_cast<int>(input.rows * scale));
    offset.x = (targetSize.width - scaledSize.width) / 2;
    offset.y = (targetSize.height - scaledSize.height) / 2;
    output = cv::Mat::zeros(targetSize, input.type());
    cv::Mat scaledImage;
    cv::resize(input, scaledImage, scaledSize);
    scaledImage.copyTo(output(cv::Rect(offset.x, offset.y, scaledSize.width, scaledSize.height)));
}