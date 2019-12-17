/**/
#include <iostream>
#include "factor.h"  // local header file
using namespace std;

int main()
{
    unsigned int Mcount=0;
    
    FactorMod3();
    FactorModX(3);
    FactorModXRange(5,1000);
    Mcount = GetFactorModXRange(5,500);
    cout << "Final result is: " << Mcount << endl;

    auto AMcount = GetFactorModXRange(5,5000);
    cout << "Final (auto) result is: " << AMcount << endl;     

    return 0;
}