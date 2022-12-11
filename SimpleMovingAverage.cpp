#include "SimpleMovingAverage.h"
#include <chrono>
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
    float sum;
    int len = inputSignal.size();
    for (int i = 0; i <= (len - window); i++) {
        sum = 0;
        for (int j = i; j < (i + window); j++) {
            sum += inputSignal[j];
        }
        outputSignal.push_back(sum / window);
    }
}

void simpleMovingAverageImpl(const vector<double> in, vector<double>& out, int window) {
    auto begin = std::chrono::steady_clock::now();

    simpleMovingAverage(in, out, window);

    auto end = std::chrono::steady_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    std::cout << "Type: double " << "Window: " << window << " The time: " << elapsed_ms.count() << " ms\n";
}

void simpleMovingAverageImpl(const vector<float> in, vector<float>& out, int window) {
    auto begin = std::chrono::steady_clock::now();

    simpleMovingAverage(in, out, window);

    auto end = std::chrono::steady_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    std::cout << "Type: float " << "Window: " << window << " The time: " << elapsed_ms.count() << " ms\n";
   // for (int i = 0; i < out.size(); i++) {
   //     cout << out[i] << "\n";
    //}
}