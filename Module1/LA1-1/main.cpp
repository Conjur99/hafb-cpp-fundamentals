#include <iostream>
using namespace std;

int main()
{
    int age;    //int: signed integers

    //cout: for system output
    std::cout << "Now in github" <<std::endl;
    cout << "Another line" <<endl;
    cout << "Nittany Lions "<<"PSU "<<"Penna"<<endl;
   
    //cin: for system/user input
    cout << "Enter your age?" << endl;
    cin >> age;
    cout << "I see you are: " << age << endl;

    cout << "Integers are: " << sizeof(int) << " bytes." << endl;
    cout << "Min integer values: " << INT32_MIN <<
            "Max Integers: " << INT32_MAX << " bytes." << endl;

    return 0;

}