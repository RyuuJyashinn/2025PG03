#include <stdio.h>
#include <iostream>
#include <list>
#include <thread>
using namespace std;

void AddFour(int num, int& result) {
    result = num + 4;
}

void MulFour(int num, int& result) {
    result = num * 4;
}

void PowFour(int num, int& result) {
    result = num * num;
    result = result * result;
}

int main() {
    int num;
    cout << "Input The Number: ";
    cin >> num;

    int addResult;
    int mulResult;
    int powResult;

    thread t1(AddFour, num, ref(addResult));
    thread t2(MulFour, num, ref(mulResult));
    thread t3(PowFour, num, ref(powResult));

    t1.join();
    t2.join();
    t3.join();

    cout << "AddResult: " << addResult << endl;
    cout << "MulResult: " << mulResult << endl;
    cout << "PowResult: " << powResult << endl;

    return 0;
}