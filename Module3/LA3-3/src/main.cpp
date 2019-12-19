#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
    Distance d1(34,9.5);
    d1.ShowDist();    //TODO: not tested

    Distance d2(10,9.5);
    d2.ShowDist();

    Distance d3;

    d3 = d1 + d2;    //need to define operator "+"

    // Display computed value
    d3.ShowDist();

    return 0;
}