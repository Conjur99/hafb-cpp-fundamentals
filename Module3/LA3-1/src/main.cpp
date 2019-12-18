/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-18
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include "height.h"
#include "counter.h"
#include <iostream>

int main() 
{
    // Test: pass value to 
    Height h1 = 83;
    print_feet(h1);
    // print_feet2(h1);

    Counter c1, c2;
    std::cout << "\nCounter 1: " << c1.count() << std::endl;
    std::cout << "Counter 2: " << c2.count() << std::endl;

    ++c1;
    ++c2;
    ++c2;
    ++c2;

    std::cout << "\nCounter 1: " << c1.count() << std::endl;
    std::cout << "Counter 2: " << c2.count() << std::endl;

    c1=c2++;
    
    return 0;
}