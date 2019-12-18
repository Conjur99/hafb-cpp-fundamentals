#include "counter.h"

Counter Counter::operator ++()
{
    ++count_;                   //unary operator

    // //Create object, set it and return it
    // Counter temp;
    // temp.count_ = count_;
    // return temp;

    //one liner
    return Counter(++count_);   //unnamed temp object

}

Counter Counter::operator ++(int) //postfix
{
    return Counter(count_++);
}


