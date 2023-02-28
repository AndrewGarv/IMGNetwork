<<<<<<< HEAD
#include "InputLayer.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <vector>
using namespace std;

InputLayer::InputLayer(int x)
{
	inputSize = x;
}

double InputLayer::sigmundAct(double x)
{
	return 1.0 / (1.0 + exp(-x));
}

vector<double> InputLayer::forward_propagation(vector<double> input, vector<vector<vector<double>>> weights, vector<double> biases)
{
	vector<double> hidden;
	vector<double> output;

    for (int j = 0; j < weights[0].size(); j++) 
    {
        double activation = biases[0];
        for (int i = 0; i < input.size(); i++)
        {
            activation += input[i] * weights[0][i][j];
        }
        hidden.push_back(sigmundAct(activation));
    }

    for (int j = 0; j < weights[1].size(); j++) 
    {
        double activation = biases[1];
        for (int i = 0; i < hidden.size(); i++) 
        {
            activation += hidden[i] * weights[1][i][j];
        }
        output.push_back(sigmundAct(activation));
    }
    return output;
=======
#include "InputLayer.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <vector>
using namespace std;

InputLayer::InputLayer(int x)
{
	inputSize = x;
}

double InputLayer::sigmundAct(double x)
{
	return 1.0 / (1.0 + exp(-x));
}

vector<double> InputLayer::forward_propagation(vector<double> input, vector<vector<vector<double>>> weights, vector<double> biases)
{
	vector<double> hidden;
	vector<double> output;

    for (int j = 0; j < weights[0].size(); j++) 
    {
        double activation = biases[0];
        for (int i = 0; i < input.size(); i++)
        {
            activation += input[i] * weights[0][i][j];
        }
        hidden.push_back(sigmundAct(activation));
    }

    for (int j = 0; j < weights[1].size(); j++) 
    {
        double activation = biases[1];
        for (int i = 0; i < hidden.size(); i++) 
        {
            activation += hidden[i] * weights[1][i][j];
        }
        output.push_back(sigmundAct(activation));
    }
    return output;
>>>>>>> 28f6c827bd27c15830a8a74b489de74073a819bf
}