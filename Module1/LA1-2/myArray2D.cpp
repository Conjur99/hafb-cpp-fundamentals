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

    // [col][rows]
    int bi_array [3][5]= {
        {2,3,4,5,6},
        {3,5,7,9,0},
        {45,45,45,45,45}     
    };
    // Print each element, TODO: did not finish
    for (int row = 0; row <3 ++row)
    {
        for (int column = 0; column <5; ++column)
        {
            cout << "Element at [" << row << "]" << "[" << column << "]" << bi_array[row][column];
        }
    }
    
    // cout << "Enter exam grades: " << endl;
    // for (int num =0; num <kMaxNum; ++num)
    // {
    //     cout << "Enter " << num +1 << " grades: " << endl;
    //     cin >> grades[num];  // access each element using []
    //     sum += grades[num];
    // }
    // average_grade = static_cast<float>(sum) / kMaxNum;
    // cout << "Average is: " << average_grade;
    return 0;
}