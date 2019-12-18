/**
 * @file carton.cpp
 * @author your name (you@domain.com)
 * @brief Contructor a Carton object
 * @version 0.1
 * @date 2019-12-18
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include "carton.h"
#include <iostream>

Carton::Carton()                //namespace for carton
{
    height_= 0;
    width_ = 0;
    length_ = 0;
}

//second constructor
Carton::Carton(double length, double width, double height)
{
    height_= height;
    width_ = width;
    length_ = length;
}

void Carton::set_height(double height)
{
    height_ = height;
}

void Carton::set_width(double width)
{
    width_ = width;
}

void Carton::set_length(double length)
{
    length_ = length;
}


void Carton::ShowInfo()
{
    std::cout << "Box height: " << height() << std::endl;
    std::cout << "Box width: " << width() << std::endl;
    std::cout << "Box length: " << length() << std::endl;
}

double Carton::length()             //function of a class = method
{
    return length_;
}

double Carton::width()             //function
{
    return width_;
}

double Carton::height()             //function
{
    return height_;
}