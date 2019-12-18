#include"height.h"
#include <iostream>

//Friend functions have access to private data member. 
void print_feet(Height h1)
{
    std::cout << "Your height in feet is: " <<
        h1.inches_ /12 << std::endl;
    
    std::cout << "Your height in inches is: " <<
        h1.inches_ << std::endl;
}

// void print_feet2(Height h1)
// {
//     std::cout << "Your height in feet is: " <<
//         h1.inches /12 << std::endl;
    
//     std::cout << "Your height in inches is: " <<
//         h1.inches << std::endl;
// }
