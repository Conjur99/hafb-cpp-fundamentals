/**
 * @file age.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */


#include <iostream>
using namespace std;

int main()
{
    int age=0;
    cout << "enter your age: ";
    cin >> age;
    //Display rights
    // 1) If under 18, you are in school

    if (age < 18)
    {
        cout << "You would be in school" << endl;
    
    }
    // 2) If over 18, can vote

    else if (age >= 18 && age < 21)
    {
        cout << "You can vote" << endl;
    }
    
    // 3) If over 21, can buy alcohol

    else if (age >= 21 && age < 65)
    {
        cout << "You can buy alcohol" << endl;
    }
    else
    {
        cout << "You can retire" << endl;
    }
    
    // 4) if over 65, can retire
    return 0;
}