#include <iostream>
using namespace std;

int main()
{
    // Calculate BMI formula: weight(kg) /[height(m)]^2
    //Floting point variables are float or double
    float weight = 0, height = 0, bmi = 0;

    // Enter weight
    cout << "Enter your weight (kg)?" << endl;
    cin >> weight;
    cout << "Your weight is: " << weight << endl;

    // Enter height
    cout << "Enter your height (m)?" << endl;
    cin >> height;
    cout << "Your height is: " << height << endl;

    // Calculate BMI
    bmi = weight /(height * height);
    cout << "Your PMI is (kg/m2): " << bmi << endl;
    
    return 0;
}