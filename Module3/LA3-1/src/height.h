//Class Height with data member "inches"
#pragma once

class Height
{
private:
    /* data */
    double inches_;

public:
    Height() {inches_ = 0;}
    Height(double inches) : inches_(inches){}
    ~Height(){};

    //Setter and Getter
    double inches() const {return inches_;}
    void set_inches(double inches){inches_ = inches;}

    //Other methods
    friend void print_feet(Height h1);

};

// void print_feet2(Height h1);

