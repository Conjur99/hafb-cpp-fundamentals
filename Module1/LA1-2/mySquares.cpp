/**
 * @file mySquares.cpp
 * @author your name (you@domain.com)
 * @brief Print multiple number square-root
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <iomanip> // for formatted output
#include <cmath> // for sq rt function
using namespace std;

const int kMaxCount = 5;

//Print first 10 digits square-root
int main()
{
     
    cout << "Number     Square Root" << endl;
    cout << "------     -----------" << endl;
    cout << setiosflags(ios::showpoint);
    for(int count = 1; count < kMaxCount; ++count )
    {
        cout << setw(4) << count << setw(15)  << sqrt(count) << endl;
    }
    cout << "Done" << endl;
    return 0;
}