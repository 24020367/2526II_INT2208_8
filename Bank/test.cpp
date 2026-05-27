#include <iostream>
#include <string>
#include <iomanip>

#include "main.h"

using namespace std;

void runTest(string tcID, int age, double income, int credit_score, char employment, string expectedOutput)
{
    cout << tcID << " ";
    string actualOutput = bank(age, income, credit_score, employment);
    if (actualOutput == expectedOutput)
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "FAIL" << endl;
    }
}

int main()
{
    runTest("TC_01", 17, 25.0, 600, 'C', "Invalid Input");
    runTest("TC_02", 66, 25.0, 600, 'C', "Invalid Input");
    runTest("TC_03", 30, 4.9, 600, 'C', "Invalid Input");
    runTest("TC_04", 30, 500.1, 600, 'C', "Invalid Input");
    runTest("TC_05", 30, 25.0, 299, 'C', "Invalid Input");
    runTest("TC_06", 30, 25.0, 851, 'C', "Invalid Input");
    runTest("TC_07", 30, 25.0, 600, 'X', "Invalid Input");
    runTest("TC_08", 30, 20.0, 300, 'C', "REJECT");
    runTest("TC_09", 30, 5.0, 500, 'F', "REJECT");
    runTest("TC_10", 18, 5.0, 501, 'C', "REJECT");
    runTest("TC_11", 30, 14.9, 701, 'F', "REJECT");
    runTest("TC_12", 30, 14.9, 850, 'C', "MANUAL REVIEW");
    runTest("TC_13", 65, 15.0, 600, 'C', "APPROVE");
    runTest("TC_14", 30, 500.0, 750, 'F', "MANUAL REVIEW");

    return 0;
}
