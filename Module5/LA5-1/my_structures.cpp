#include <iostream>
using namespace std;


struct Part
{
   /* all data is public */
   int model_num;
   int part_num;
   float cost;
};

struct Car
{
   Part doors;
   Part windows;
   Part tires;
};


// Local Prototypes

int main()
{
   Part part1;

   part1.model_num = 6344;
   part1.part_num = 373;
   part1.cost = 45.90;

   std:cout << "Model: " << part1.model_num 
   << " part: " << part1.part_num  
   << " cost $ " << part1.cost << std::endl;

   Part part2;
   part2 = {6277, 781, 32.10};
   std::cout << "Model: " << part2.model_num 
   << " part: " << part2.part_num  
   << " cost $ " << part2.cost << std::endl;

   // Part part3 = part2;
   // std::cout << "Model: " << part2.model_num 
   // << " part: " << part2.part_num  
   // << " cost $ " << part2.cost << std::endl;
   
   //Car
   Car sedan;
   sedan.doors.part_num = 101;
   sedan.windows.model_num = 7001;
   sedan.tires.cost = 89.99;

      return 0;
}
