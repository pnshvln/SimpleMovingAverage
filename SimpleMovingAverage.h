#ifndef SIMPLE_MOVING_AVERAGE_H
#define SIMPLE_MOVING_AVERAGE_H

#include <iostream>
#include <vector>
using namespace std;

void simpleMovingAverage(const vector<double> inputSignal, vector<double>& outputSignal, int window);
void simpleMovingAverage(const vector<float> inputSignal, vector<float>& outputSignal, int window);
#endif // !SIMPLE_MOVING_AVERAGE_H

