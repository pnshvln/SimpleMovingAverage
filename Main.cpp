#include <iostream>
#include <time.h>
#include "SimpleMovingAverage.h"
using namespace std;

void test1();
void test2();
int main() {

    test2();
	return 0;
}

void test1() {
    //vector <float> in, out;
    vector <double> in, out;
    int window = 3;
    in = { 1, 2, 3, 4, 5 };
    simpleMovingAverageImpl(in, out, window);
} 


void test2() {
       // vector <double> inputSignal, outputSignal;
    vector <float> inputSignal, outputSignal;
    inputSignal.reserve(1000000);
    outputSignal.reserve(1000000);
    double t = 0;
    double tk = 0.1;
    while (t < 100000.0)
    {
        t = t + tk;
        inputSignal.push_back(sin(t) + 0.001 * (rand() % 100));
    }
    simpleMovingAverageImpl(inputSignal, outputSignal, 16);

}


