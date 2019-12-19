/**
 * @file my_sets.cpp
 * @author your name (you@domain.com)
 * @brief Learn about sets, elements are sorted according to value
 * Elements are all distinct value
 * @version 0.1
 * @date 2019-12-19
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <set>      //A container with a unique group SORTED elements

//Methods: size(), empty, insert, erase, find
//Find returns position of first element equal to the provided value
// always compare value against the end() if it find no matches

int main()
{
    std::set<int> numbers;
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);

    //search for a value
    if(numbers.find(10) != numbers.end())
    {
        std::cout << "10 is in numbers" << std::endl;
    }
    std::cout << "Set has " << numbers.size() << " element" << std::endl;

}