#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
    Distance d1(34,9.5);
    d1.ShowDist();    

    Distance d2(10,9.5);
    d2.ShowDist();

    Distance d3;

    d3 = d1 + d2;    

    // Display computed value
    d3.ShowDist();

    Distance d4 = d1 + d2 + d3;
    d4.ShowDist();
    
    //Display with
    std::cout << d4 << std::endl;

    return 0;
}