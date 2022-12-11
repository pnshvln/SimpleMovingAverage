#include <iostream>
#include "SimpleMovingAverage.h"
using namespace std;

void test1();
void printResults(vector<double> res);
int main() {

    test1();
	return 0;
}

void test1() {
    vector <double> in, out;
    int window = 3;
    in = { 1, 2, 3, 4 };
    simpleMovingAverage(in, out, window);
    printResults(out);
}

void printResults(vector<double> res) {

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << "\n";
    }
}