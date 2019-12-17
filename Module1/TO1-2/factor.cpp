#include <iostream>
#include "factor.h"  // local header file
using namespace std;

void FactorMod3()
{
    unsigned int count = 0;
   for(unsigned int x = 1; x <= 30; ++x)
   {
        if (x % 3 == 0)
        {
        count++;
        }   
   }
   cout << "Result is: " << count << endl;
}

/**
 * @brief Calculate modulus of input parameter
 * 
 * @param mod_number    //The divisible number
 */
void FactorModX(int mod_number)
{
    unsigned int count = 0;
   for(unsigned int x = 1; x <= 30; ++x)
   {
        if (x % mod_number == 0)
        {
        count++;
        }   
   }
   cout << "Result is: " << count << endl;
}

/**
 * @brief Calculate modulus of input parameter in input range
 * 
 * @param mod_number    //The divisible number
 * @param max_range     // Range input
 */
void FactorModXRange(int mod_number, int max_range)
{
    unsigned int count = 0;
   for(unsigned int x = 1; x <= max_range; ++x)
   {
        if (x % mod_number == 0)
        {
        count++;
        }   
   }
   cout << "Result is: " << count << endl;
}

/**
 * @brief Calculate modulus of input parameter in input range
 * 
 * @param mod_number    //The divisible number
 * @param max_range     // Range input
 * @return unsigned int : number of instances
 */
unsigned int GetFactorModXRange(int mod_number, int max_range)
{
    unsigned int count = 0;
   for(unsigned int x = 1; x <= max_range; ++x)
   {
        if (x % mod_number == 0)
        {
        count++;
        }   
   }
   
   return count;
}