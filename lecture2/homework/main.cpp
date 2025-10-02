#include <opencv2/opencv.hpp>
#include "tools.hpp"
#include <fmt/core.h>
int main() {
    cv::Mat inputImage = cv::imread("img/test_1.jpg");
    if (inputImage.empty()) {
        fmt::print("无法读取图像\n");
        return -1;
    }
    cv::Mat outputImage;
    double scale;
    cv::Point offset;
    resizeAndCenterImage(inputImage, outputImage, scale, offset);
    fmt::print("缩放比例: {}\n", scale);
    fmt::print("图像偏移距离 - X: {}, Y: {}\n", offset.x, offset.y);
    cv::imshow("Scaled Image", outputImage);
    cv::waitKey(0);
    return 0;
}