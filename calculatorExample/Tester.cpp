
// Tester.cpp

#include<iostream>
using namespace std;
#include "Calculator.h"

int testSuite(int BASE, int EXPONENT, float RESULT) {
    int passed = 0;
    float result = 0.0;
    int resultB = 0; 

    result = power(BASE, EXPONENT);
    if (result == RESULT) {
        cout << "Raise to Power Test Passed" << endl;
        passed++;
    }
    else {
        cout << "Raise to Power Test Failed" << endl;
    }
    resultB = exponent(RESULT, BASE);
    if (resultB == EXPONENT) {
        cout << "Find Exponent Test Passed" << endl;
        passed++;
    }
    else {
        cout << "Find Exponent Test Failed" << endl;
    }
    return passed; 
}