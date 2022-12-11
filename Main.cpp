#include <iostream>
#include <fstream>
#include <time.h>
#include "SimpleMovingAverage.h"
using namespace std;

void test1();
void test(const vector<float>& inputSignal);
void test(const vector<double>& inputSignal);
void getRandomFunction(vector<float>& f);

int main() {
    vector <float> inputSignalFloat;
    vector <double>  inputSignalDouble;
    getRandomFunction(inputSignalFloat);
    test(inputSignalFloat); // расчеты для типа float, окон 4,8,16,32,64,128
    for (int i = 0; i < inputSignalFloat.size(); i++) {
        inputSignalDouble.push_back((double)inputSignalFloat[i]);
    }
    test(inputSignalDouble); // расчеты для типа double, окон 4,8,16,32,64,128


	return 0;
}

void test1() {
    //vector <float> in, out;
    vector <double> in, out;
    int window = 3;
    in = { 1, 2, 3, 4, 5 };
    simpleMovingAverageImpl(in, out, window);
} 

void getRandomFunction(vector<float>& f) {

    f.reserve(1000000);
    double t = 0;
    double tk = 0.1;
    while (t < 100000.0)
    {
        t = t + tk;
        f.push_back(sin(t) + 0.001 * (rand() % 100));
    }
}
void test(const vector<float>& inputSignal) {
    vector <float> sma, x;
    //ofstream fOutResult("result.dat");
    sma.reserve(1000000);
    simpleMovingAverageImpl(inputSignal, sma, 4);
    simpleMovingAverageImpl(inputSignal, sma, 8);
    simpleMovingAverageImpl(inputSignal, sma, 16);
    simpleMovingAverageImpl(inputSignal, sma, 32);
    simpleMovingAverageImpl(inputSignal, sma, 64);
    simpleMovingAverageImpl(inputSignal, sma, 128);
}

void test(const vector<double>& inputSignal) {
    vector <double> sma, x;
    //ofstream fOutResult("result.dat");
    sma.reserve(1000000);
    simpleMovingAverageImpl(inputSignal, sma, 4);
    simpleMovingAverageImpl(inputSignal, sma, 8);
    simpleMovingAverageImpl(inputSignal, sma, 16);
    simpleMovingAverageImpl(inputSignal, sma, 32);
    simpleMovingAverageImpl(inputSignal, sma, 64);
    simpleMovingAverageImpl(inputSignal, sma, 128);
}



