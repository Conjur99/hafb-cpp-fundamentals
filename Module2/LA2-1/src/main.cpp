#include <iostream>
#include <string>
//using namespace std;

/**
 * @brief Shows how to define and use a string object
 *
 * We will define string variables and then see what operators and
 * functions work with these variables.
 *
 * @return int 0 means function exited with success
 */
int main() 
  {
  // create a variable of type string
  std::string name = "Weber Waldo";

  // print it out
  std::cout << name << std::endl;

  // get a string from a user
  //std:cin >> name;
  std::cout << "Enter your name: " << std::endl;

  // use getline to include spaces
  std::getline(std::cin, name);

  std::cout << "Hi: " << name << std::endl;


  // add two strings together
  std::string title = "Dr. ";
  std::string formal;
  formal = title + name;
  std::cout << "Hi: " << formal << std::endl;

  // how long is the string
  std::cout << "Size is " << name.size() << std::endl;
  std::cout << "Length is " << formal.length() << std::endl;

  // use [] to get an individual character
  std::cout << "Char 3 is " << name[3] << std::endl;

  // get name and commute information from a user
  int minutes, miles;
  std::cout << "Enter your name: " << std::endl;
  std::getline(std::cin, name);
  std::cout << "Enter commute minutes: " << std::endl;
  std::cin >> minutes;
  std::cout << "Enter commute miles: " << std::endl;
  std::cin >> miles;
  std::cout <<name << " has a " << minutes << " minutes, " 
    << miles << " miles commute." << std::endl;


  // get commute information and name from a user

  // the string function find
  std::string story = "Werq90af asdfj9asf sadf9afhjoj."
  " jdglkjhdg adfjunkljbhn ui4e asdfjnkjndfs.";
  std::cout << story << std::endl;
  std::cout << "junk is at: " << story.find("junk") << std::endl;
  

  // the string function replace
  story.replace(story.find("junk"), 4, "money" );
  std::cout << story << std::endl;
  //story.replace(story.find(str1), str1.size, str2 );    //using variables

  return 0;
}

/*
      "The dragons are flying over the mountains. They are hunting for a "
      "place to settle for the waldo night. What they see is endless horizon."
*/
