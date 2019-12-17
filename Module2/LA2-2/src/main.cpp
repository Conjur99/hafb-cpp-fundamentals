#include <array>
#include <iostream>
#include <string>
#include <fstream>  // file stream

using namespace std;

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */

const int kMaxSize = 24;    //At least 24, file size is 20, can be more robust
int main() {
  // create an ojbect of type ifstream
  ifstream in;  //input file

  // open the file age.txt
  in.open("../age.txt");    //relative path from executable, up one level

  if(in.fail())
  {
    cout << "unable to open file. \n Shutting down.\n";
    return 1;   //error
  }

  // read from the age file and store values in an array
  array<int, kMaxSize> ages;
  ages.fill(-1); //initialize to -1
  int age_size = 0;
  // in >> ages[age_size];    //write a loop, if you know the size
  // age_size++;
  // in >> ages[age_size++];
  // in >> ages[age_size++];

 // read to the end of the file
  while (age_size < kMaxSize && in >> ages[age_size])
  {
    age_size++;
  }

  // print out the values in the array
  for(auto age: ages)
  {
    cout << age << endl;
  }

 in.close();   //if you open it, then close it!

  // print out the valid values in the array

  // print out the all the values in the array

  // Define an ifstream object and open the file name.txt
  
  array<string, kMaxSize> names;
  names.fill("-"); //initialize to invalid dash
  int name_size = 0;
  ifstream in_names;  //input file
  in_names.open("../name.txt"); 

    if(in_names.fail())
  {
    cout << "unable to open file. \n Shutting down.\n";
    return 1;   //error
  }
  
  // read one name, store it in the array, and print it
    while (name_size < kMaxSize && getline(in_names, names[name_size]))
  {
    name_size++;
  }

  // print valid elements in the names array
  for(auto name: names)
  {
    cout << name << endl;
  }

  // print all the elements in the names array
  in_names.close();   //if you open it, then close it!



  // Use a file with mixed values
  // Define an ifstream object and open the file name_age.txt
  ifstream in_name_age("../name_age.txt"); 

      if(in_name_age.fail())
      {
        cout << "unable to open file. \n Shutting down.\n";
        return 1;   //error
      }
  // reset age and name arrays
   ages.fill(-1); 
   names.fill("-");
  int index = 0;
  // read all the values from the name_age.txt file
  while (index < kMaxSize && in_name_age >> ages[index])
    {
      // need to load next record, any extra char to ignore?
      in_name_age.ignore();   //up to garbage
      getline(in_name_age, names[index]);   //full line
      index++;
    }
   

  // print valid elements in the names and ages array
  for(int num =0; num <index; ++num)
  {
    cout << "Age: " << ages[num] << " for name: " << names[num] << endl;
  }

  // print all elements in the names and ages array

   in_name_age.close();   //if you open it, then close it!
  return 0;
}
