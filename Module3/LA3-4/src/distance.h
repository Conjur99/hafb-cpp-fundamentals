//Define class for Distance with int feet and float inches
#include <iostream>

class Distance
{
private:
    int feet_;
    float inches_;
public:
    Distance() : feet_(0), inches_(0) {}
    Distance(int feet, float inches) : feet_(feet), inches_(inches) {}
    ~Distance() {};

    // Getter/Setter
    int feet() const {return feet_;}
    void set_feet(int feet) {feet_ = feet;}
    float inches() const {return inches_;}
    void set_inches(int inches) {inches_ = inches;}

    //Other methods
    void ShowDist() const;

    //Create "+" operator
    Distance operator + (Distance rhs) const;

    // pass read-only reference to an output stream
    friend std::ostream& operator << (std::ostream& os, const Distance& distance);

    //Create "-" operator
    Distance operator - (Distance rhs) const;

    // Update function
    void update_distance(int ft, float in); 

    bool operator < (Distance rhs) const; //compare objects
};
