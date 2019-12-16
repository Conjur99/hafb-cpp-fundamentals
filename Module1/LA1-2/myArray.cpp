/**
 * @file myArray.cpp
 * @author your name (you@domain.com)
 * @brief Use arrays and C++ container
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
using namespace std;
const int kMaxNum = 5;

int main()
{
    // C-style array notation: type name[elements]
    int grades[kMaxNum];      //array of 5 integers, indexed 0-4
    float average_grade = 0;
    int sum = 0;
    cout << "Enter exam grades: " << endl;
    for (int num =0; num <kMaxNum; ++num)
    {
        cout << "Enter " << num +1 << " grades: " << endl;
        cin >> grades[num];  // access each element using []
        sum += grades[num];
    }
    average_grade = static_cast<float>(sum) / kMaxNum;
    cout << "Average is: " << average_grade;
    return 0;
}