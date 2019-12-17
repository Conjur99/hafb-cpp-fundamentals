/* header */

#ifndef SUM_H_
#define SUM_H_
#include <iostream>
#include <array>
using namespace std;

#pragma once

// prototype
int Sum( int num1, int num2);

void UpdateStep(int& step);     //int& means to pass address (pointer)

int Max2(int num1, int num2);
int Max3(int num1, int num2, int num3);
int Max10(const std::array<int, 10>& nums);       //By value or reference (which can be changed unless const)

void ClearElements(std::array<int, 10>& nums);

#endif /* !SUM_H_ */