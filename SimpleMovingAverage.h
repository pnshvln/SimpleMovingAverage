#ifndef SIMPLE_MOVING_AVERAGE_H
#define SIMPLE_MOVING_AVERAGE_H

#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

void simpleMovingAverage(const vector<double> inputSignal, vector<double>& outputSignal, int window);
void simpleMovingAverage(const vector<float> inputSignal, vector<float>& outputSignal, int window);
void simpleMovingAverageImpl(const vector<double> in, vector<double>& out, int window);
void simpleMovingAverageImpl(const vector<float> in, vector<float>& out, int window);
#endif // !SIMPLE_MOVING_AVERAGE_H

