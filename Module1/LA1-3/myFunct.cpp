/**
 * @file myFunct.cpp
 * @author your name (you@domain.com)
 * @brief sum two values
 * @version 0.1
 * @date 2019-12-17
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include "myFunct.h"
using namespace std;

// Function Definition
int Sum( int num1, int num2)  //Passes value, not address (make its own copy)
{
  return num1 + num2;
}


/**
 * @brief increment value by 1
 * 
 * @param step
 * 
 */

void UpdateStep(int& step)      //uses address of parameter
{
    cout << "Currrent step: " << step << endl;
    // step++
    step +=1;
    //step = step +1
    cout << "New step: " << step << endl;
}