/**
 * @file arrayContainer.cpp
 * @author your name (you@domain.com)
 * @brief Arrays for containers
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <array>    //library
using namespace std;

int main()
{
    //Create array using library: array<type, numOfElements> name;
    array<double, 5> grades {11.2,44.5,33.7,77.8,88.9};

    cout << "Size of array: " << grades.size() << endl;
    for(int index = 0; index < grades.size(); ++index)
    {
        cout << grades[index] << endl;
    }

    for (auto grade : grades)
    return 0;
}