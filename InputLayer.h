<<<<<<< HEAD
#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <vector>
using namespace std;

class InputLayer
{
public:
	InputLayer(int x);
	double sigmundAct(double x);
	vector<double> forward_propagation(vector<double> input, vector<vector<vector<double>>> weights, vector<double> biases);
private:
	int inputSize;
};

=======
#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <vector>
using namespace std;

class InputLayer
{
public:
	InputLayer(int x);
	double sigmundAct(double x);
	vector<double> forward_propagation(vector<double> input, vector<vector<vector<double>>> weights, vector<double> biases);
private:
	int inputSize;
};

>>>>>>> 28f6c827bd27c15830a8a74b489de74073a819bf
