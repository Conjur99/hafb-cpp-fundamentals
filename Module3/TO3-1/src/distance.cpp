// distance.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
using namespace std;
#include "distance.h"

//Display as 2'-9" format
void Distance::ShowDist() const
{
    std::cout << feet() << "\'- " << inches() << "\"" << std::endl;
}

// Create operator to combine two distances
Distance Distance::operator + (Distance rhs) const
{
    int feet = feet_ + rhs.feet_;
    float inches = inches_ + rhs.inches_;

    // Update if more than 12 inches
    if (inches > 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    return Distance(feet, inches);
}

// Define "<<"" operator
// returning ref to output stream "os"
// Do not include '\n' or endl, let user define 
    std::ostream& operator << (std::ostream& os, const Distance& distance)
    {
        os << "feet: " << distance.feet_ << " inches: " << distance.inches_;
        
        return os;
    }

// Define "-" operator
Distance Distance::operator - (Distance rhs) const
{
    int ft = feet_ - rhs.feet_;
    float in = 0;

    // Update if less than 12 inches
    if (inches_ < rhs.inches_)
    {
        ft -= 1;
        in = (inches_ +12) - rhs.inches_;
    }
    return Distance(ft, in);
}
    
// Update function
void Distance::update_distance(int ft, float in)
    {
        set_feet(ft);
        set_inches(in);
    }

