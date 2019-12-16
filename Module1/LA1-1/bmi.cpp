#include <iostream>
using namespace std;
const float kMtersToInches = 39.37;
const float kKiloToPounds = 2.204;
const int kBMIImperial = 703;

int main()
{
    // Calculate BMI formula: weight(kg) /[height(m)]^2
    //Floting point variables are float or double
    float weight = 0, height = 0, bmi = 0;

    // Enter weight
    cout << "Enter your weight (kg)?" << endl;
    cin >> weight;
    cout << "Your weight is: " << weight << endl;

    //Convert to pounds
    weight = weight * kKiloToPounds;

    // Enter height
    cout << "Enter your height (m)?" << endl;
    cin >> height;
    cout << "Your height is: " << height << endl;
    height = height * kMtersToInches;

    // Calculate BMI
const int kBMIImperial = 703;
    bmi = (weight * kBMIImperial) /(height * height);
    cout << "Your PMI is (lb/ft2): " << bmi << endl;
    
    return 0;
}