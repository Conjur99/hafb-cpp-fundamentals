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
using namespace std;
#include "carton.h"
#include <iostream>
#include <string>

    // const double Carton::kMaxSize = 100;
    const double Carton::kMinLength = 6;
    const double Carton::kMinWidth = 3;
    const double Carton::kMinHeight = 0.25;

Carton::Carton()                //namespace for carton
{
    height_= 0;
    width_ = 0;
    length_ = 0;
}

//second constructor
Carton::Carton(double length, double width, double height)
{
    
    try 
    {
        SetMeasurements(length,width,height);
    }

    catch(std::out_of_range e)
    {
        std::cout << e.what() << "\n";
        throw;
    }

    height_= height;
    width_ = width;
    length_ = length;
}

void Carton::SetMeasurements(double length, double width, double height)
{
    if(length <= 0 || width <= 0 || height <=0)
    {
        throw out_of_range("All measurements must be greater than zero.");
    }

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
    if(length < kMinLength)
    {
        string error_msg = "Length must be greater than " + std::to_string(Carton::kMinLength);
        throw std::out_of_range(error_msg);
    }
    length_ = length;
}


void Carton::ShowInfo()
{
    std::cout << "Box height: " << height() << std::endl;
    std::cout << "Box width: " << width() << std::endl;
    std::cout << "Box length: " << length() << std::endl;
    std::cout << "Box volume: " << Volume() << std::endl;

}

Carton::~Carton()
{

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

double Carton::Volume() const
{
    return length_ * width_ * height_;
}