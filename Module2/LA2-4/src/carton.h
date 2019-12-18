/**
 * @file carton.h
 * @author your name (you@domain.com)
 * @brief Create a class
 * @version 0.1
 * @date 2019-12-18
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#pragma  once
#include <iostream>

// Create a class, declaration
class Carton                //convention is capitalized
{
    private:                //concept of encapsulation, information is stored
        double length_;     // "_" convention means it is private
        double width_;        
        double height_;

    public:
        //constructor: create objects
        Carton();               //same as class
        Carton(double length, double width, double height);
        // Getters (lower case)
        double length();
        double width();
        double height();

        //Setters
        void set_length(double length);
        void set_width(double width);
        void set_height(double height);

        //Other methods (upper case)
        void ShowInfo();


};      //must have ";"



