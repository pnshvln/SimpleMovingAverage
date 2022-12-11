#include "SimpleMovingAverage.h"

void simpleMovingAverage(const vector<double> inputSignal, vector<double>& outputSignal, int window) {
    double sum;
    int len = inputSignal.size();
    for (int i = 0; i <= (len - window); i++) {
        sum = 0;
        for (int j = i; j < (i + window); j++) {
            sum += inputSignal[j];
        }
        outputSignal.push_back(sum / window);
    }
}
void simpleMovingAverage(const vector<float> inputSignal, vector<float>& outputSignal, int window) {

}