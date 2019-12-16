#include <iostream>
//#include "factor.h"
using namespace std;

// Function Prototype
 void FactorMod3();
 
// Main Function
int main()
{
    FactorMod3();
    return 0;
}

  // Function Definition
  void FactorMod3()
  {
    unsigned int count = 0;
    int MaxCount = 30;
  for (int num1 =1; num1 <= MaxCount; ++num1)
  
  if ( num1 % 3 == 0 )
    {
        ++count;
    }
  cout << "Count is: " << count;

  return;
  }