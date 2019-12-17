#include <iostream>
#include "cars.h"
// using namespace lamborghini;
// using namespace porsche;

int HorsePower()
{
    return 150;
}           


int lamborghini::HorsePower()
{
    return 760;
}     

int porsche::HorsePower()
{
    return 700;
}     