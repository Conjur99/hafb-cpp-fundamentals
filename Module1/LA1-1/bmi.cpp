#include <iostream>
using namespace std;
const float kMtersToInches = 39.37;
const float kKiloToPounds = 2.204;
const int kBMIImperial = 703;
const float kLowBMI = 18.5;
const float kHiBMI = 24.9;

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
    bmi = (weight * kBMIImperial) / (height * height);
    cout << "Your BMI is (lb/ft2): " << bmi << endl;

    // Task: Print if in 'good' range" BMI between 18.5 to 24.9
    if(bmi > kLowBMI && bmi < kHiBMI)
    {
        cout << "Your BMI " << bmi << " is good" << endl;
    }
    else
    {
        cout << "Your BMI " << bmi << " is bad" << endl;
    }
    
    
    cout << "Thanks for using the BMI program." << endl;
    return 0;
}