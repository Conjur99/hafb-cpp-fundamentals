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

//Return the maximum of the two input numbers
int Max2(int num1, int num2)
{
  if(num1 >= num2)
  {
    return num1;    // num1 is larger
  }
  else
  {
    return num2;
  }
  
}

//Return the maximum of the three input numbers
int Max3(int num1, int num2, int num3)
{
  return(num3);     //TODO: fix this
}

//TODO: Where are the values in the array defined?
int Max10(const std::array<int, 10>& nums)    //pass by constant address 
{
  int max = nums[0];
  for(auto num : nums)
  {
    if(max <= num)
    {
      max = num;
    }
  }
  return max;
}

void ClearElements(std::array<int,10>& nums)
{
  for(int index = 0; index < nums.size(); ++index)      
  {
    nums[index] = -99;    //set all values to -99
  }
}