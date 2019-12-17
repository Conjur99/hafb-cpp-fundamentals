#include <iostream>
#include "myFunct.h"
using namespace std;



// Main Function
int main()
{
  int number1 = 5, number2 = 10, number3 = 15;    
  // TODO: declare int array nums[10]
  cout << "The sum of " << number1 << " and " << number2 << " is " << Sum(number1,number2) << endl;

  cout << "Number before" << number1  << endl;
  UpdateStep(number1);                //Passes value, not address
  UpdateStep(number1);                //Repeats twice
  UpdateStep(number1); 
  cout << "Number after" << number1  << endl;

  array<int, 10> temperatures = {-12,34,67,0,12,44,99,-8,18,33};

  ClearElements(temperatures);
  for(auto temp : temperatures)
  {
    cout << temp << endl;
  }
  return 0;
}

