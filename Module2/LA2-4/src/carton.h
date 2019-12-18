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

using namespace std;

// Create a class, declaration
class Carton                //convention is capitalized
{
    private:                //concept of encapsulation, information is stored
        double length_;     // "_" convention means it is private
        double width_;        
        double height_;

    public:
        //Static constants, declaration
        // static const double kMaxSize;       //For all dimensions
        static const double kMinLength;
        static const double kMinWidth;
        static const double kMinHeight;
        
        //constructor: create objects
        Carton();               //same as class
        Carton(double length, double width, double height);
        ~Carton();

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

        void SetMeasurements(double length, double width, double height);

        double Volume() const;      //Does not allow to update because of "const". Read only.

        void WriteData(std::ostream &out) const;


};      //must have ";"



