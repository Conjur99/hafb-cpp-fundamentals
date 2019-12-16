/**
 * @file multi_tables.cpp
 * @author your name (you@domain.com)
 * @brief Display multiplication based on user input
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int kMax = 10;

int main()
{
    int number;
    cout << "Enter multiplication number: " << endl;
    cin >> number;
        
    for (int num1 = 1;num1 <= number; ++num1) // Controls rows
    {
        for (int num2 =1; num2 <= kMax; ++num2)  // lists columns
        {
            cout << setw(3) << num1 * num2 << "  ";
        }
        cout << endl;
    }
    return 0;
}