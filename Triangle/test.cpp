#include <iostream>
#include <string>
#include <iomanip>

#include "main.h"

using namespace std;
void runTest(string tcID, int a, int b, int c, string expectedOutput) {
    cout<<tcID<<" ";
    string actualOutput = triangle(a, b, c);
    if (actualOutput == expectedOutput) {
        cout << "PASS" << endl;
    } else {
        cout << "FAIL" << endl;
    }
}

int main() {
    runTest("TC_01", 0, 50, 50, "Invalid Input");
    runTest("TC_02", 101, 50, 50, "Invalid Input");
    runTest("TC_03", 50, 0, 50, "Invalid Input");
    runTest("TC_04", 50, 50, 101, "Invalid Input");
    runTest("TC_05", 10, 20, 50, "Not a Triangle");
    runTest("TC_06", 1, 2, 3, "Not a Triangle");
    runTest("TC_07", 50, 50, 50, "Equilateral");
    runTest("TC_08", 100, 100, 100, "Equilateral");
    runTest("TC_09", 50, 50, 40, "Isosceles");
    runTest("TC_10", 40, 50, 50, "Isosceles");
    runTest("TC_11", 50, 40, 50, "Isosceles");
    runTest("TC_12", 3, 4, 5, "Scalene");
    runTest("TC_13", 98, 99, 100, "Scalene");
    return 0;
}
