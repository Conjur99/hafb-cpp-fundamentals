/**
 * @file case.cpp
 * @author your name (you@domain.com)
 * @brief Mulitple If-Statement and Case
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
    char code;
    cout << "Enter spec code: ";
    cin >> code;

    // == operator to compare values
    // when comparing character level use single ''
    // if(code == 'S')
    // {
    //     cout << "The item is space grade." << endl;
    // }    

    // Use a switch statement
    switch (code)
    {
    case 'S':   //like IF statement with OR case (||)
    case 's':  
        cout << "The item is space grade." << endl;
        break;  // exits switch

    case 'M':   
        cout << "The item is military grade." << endl;
        break;  
    
    case 'C':   
        cout << "The item is commercial grade." << endl;
        break;     

    default:    // like ELSE statement
        cout << "Item not supported." << endl;
        break;     
    }

    return 0;
}