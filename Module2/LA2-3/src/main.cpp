#include <array>
#include <iostream>
#include <string>
#include <fstream> //for files

using namespace std;

/**
 * @brief Shows how to define and use an ofstream object to write to a file.
 *
 * We will define ofstream objects and then see some of the operators
 * and functions that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // arrays that contain data
  const int kMaxSize = 20;
  array<int, kMaxSize> commute_minutes = {22, 51, 63, 12, 17, 93, 45,
                                          18, 66, 45, 43, 77, 38, 43,
                                          52, 21, 8,  19, 7,  14};

  array<int, kMaxSize> commute_miles = {8,  22, 28, 2,  4,  62, 15, 6, 42, 28,
                                        16, 43, 27, 18, 41, 8,  3,  5, 2,  4};

  array<string, kMaxSize> towns = {
      "Bountiful",    "Centerville",        "Clinton",       "South Weber",
      "West Point",   "Cottonwood Heights", "Murray",        "Salt Lake City",
      "South Jordan", "West Jordan",        "American Fork", "Lindon",
      "Payson",       "Pleasant Grove",     "Spanish Fork",  "Harrisville",
      "Ogden",        "Pleasant View",      "Riverdale",     "South Ogden"};

  array<string, kMaxSize> names = {
      "Walter", "Chris", "Stan",   "Mary",  "Shelly", "Kim",  "Kelly",
      "George", "Sam",   "Walter", "Ann",   "Laura",  "Paul", "Phillip",
      "Susan",  "Hal",   "Olivia", "Polly", "Roy",    "Scott"};

  // create a variable of type ofstream: output file from stream
  ofstream commute_file;
  commute_file.open("../commute.txt");
  if(commute_file.fail())
  {
    cout << "Failed to open. \n Shutting down. \n";
    return 1;
  }

  // open the file commute.txt
  for(int index =0; index < kMaxSize; ++index)
  {
    cout << commute_minutes[index] << ", " << commute_miles[index] << endl;
    commute_file << commute_minutes[index] << "," << commute_miles[index] << endl;
  }

  // write commute_minutes and commute_miles to the file commute.txt

commute_file.close();

  // create a variable of type ofstream and open the file town.txt
  ofstream towns_file;
  towns_file.open("../towns.txt");
  if(towns_file.fail())
  {
    cout << "Failed to open. \n Shutting down. \n";
    return 1;
  }

  // open the file commute.txt
  for(int index =0; index < kMaxSize; ++index)
  {
    cout << towns[index] << ", " << names[index] << endl;
    towns_file << towns[index] << "," << names[index] << endl;
  }

towns_file.close();
  // write the towns to the file town.txt

  // Create csv file (utah_info.csv)
    
  // Header: minutes, miles, min/miles, name, town
    ofstream all_data_file;
  all_data_file.open("../utah_info.csv");
  
  string header = "minutes,miles,min/miles,name,town";
  cout << header << endl;
  all_data_file << header << endl;
  
  for(int index =0; index < kMaxSize; ++index)
  {
    cout << commute_minutes[index] << ", " 
    << commute_miles[index] << ", "
    << static_cast <float>(commute_minutes[index])/commute_miles[index] << ", " 
    << names[index] << ", "
    << towns[index] << endl;
    
    all_data_file << commute_minutes[index] << ","
    << commute_miles[index] << ","
    << static_cast <float>(commute_minutes[index])/commute_miles[index] << "," 
    << names[index] << ","
    << towns[index] << endl;
  }

  all_data_file.close();

  // create a variable of type ofstream and open the file commute_data.txt

  // write commute_minutes, commute_miles, and towns to the file commute.txt

  // do computations and add labeling to data before writing to file

  // write a report to the commute_report.txt file. Include name, town,
  // commute_minutes, commute_miles, and average minutes per mile to the file
  // commute.txt

  return 0;
}
