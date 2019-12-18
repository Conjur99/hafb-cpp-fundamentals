#pragma once
#include <iostream>

class Counter
{
private:
    /* data */
    unsigned int count_;
public:
    Counter() : count_(0) {}
    Counter(unsigned int count) : count_(count) {}
    ~Counter() {std::cout << "Bye!\n";}

//Setters and getters
unsigned int count() {return count_;}
void set_count(unsigned int count) {count_ = count;}

//Operate overload
//void operator ++() { ++count_;}
Counter operator ++();
Counter operator ++(int); //postfix

};
