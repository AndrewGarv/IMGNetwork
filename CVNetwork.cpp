<<<<<<< HEAD
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // Load an image
    cv::Mat image = cv::imread("/Users/dpxpd/Pictures/78.jpg");

    // Check if the image was successfully loaded
    if (image.empty()) {
        std::cout << "Error: Could not load image." << std::endl;
        return -1;
    }

    // Convert the image to grayscale
    cv::Mat grayImage;
    cv::cvtColor(image, grayImage, cv::COLOR_BGR2GRAY);

    // Reshape the image into a 1D vector
    std::vector<double> pixelValues;
    for (int i = 0; i < grayImage.rows; i++)
    {
        for (int j = 0; j < grayImage.cols; j++)
        {
            pixelValues.push_back(grayImage.at<uchar>(i, j));
        }
    }

    return 0;
}

=======
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // Load an image
    cv::Mat image = cv::imread("/Users/dpxpd/Pictures/78.jpg");

    // Check if the image was successfully loaded
    if (image.empty()) {
        std::cout << "Error: Could not load image." << std::endl;
        return -1;
    }

    // Convert the image to grayscale
    cv::Mat grayImage;
    cv::cvtColor(image, grayImage, cv::COLOR_BGR2GRAY);

    // Reshape the image into a 1D vector
    std::vector<double> pixelValues;
    for (int i = 0; i < grayImage.rows; i++)
    {
        for (int j = 0; j < grayImage.cols; j++)
        {
            pixelValues.push_back(grayImage.at<uchar>(i, j));
        }
    }

    return 0;
}

>>>>>>> 28f6c827bd27c15830a8a74b489de74073a819bf
