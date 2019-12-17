#include <iostream>
#include "myFunct.h"
using namespace std;



// Main Function
int main()
{
  int number1 = 5, number2 = 10;    
  cout << "The sum of " << number1 << " and " << number2 << " is " << Sum(number1,number2) << endl;

  cout << "Number before" << number1  << endl;
  UpdateStep(number1);                //Passes value, not address
  UpdateStep(number1); 
  UpdateStep(number1); 
  cout << "Number after" << number1  << endl;

  return 0;
}

