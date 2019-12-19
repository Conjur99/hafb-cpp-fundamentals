#include <iostream>
#include <map>      //for maps
#include <string>

int main()
{
    //Maps are key-value pair element
    std::map<int, std::string> info;

    //Add elements to a map using make_pair() built-in function
    //Use insert()

    info.insert(std::make_pair(1, "Waldo"));
    info.insert(std::make_pair(2, "Swoop"));
    std::cout << "Size is:" << info.size() << std::endl;

    //Find key value (position)
    auto position = info.find(1);
    if (position != info.end())
    {
        std::cout << "Found key " << position->first 
        << " value is " << position->second << std::endl;
    }

    //Iterate
    for(auto it = std::begin(info); it != std::end(info); ++it)
    {
        std::cout << it ->first << " "  << it->second << "\t";
    }
    std::cout << std::endl;

    //Range based
    for(std::pair<int, std::string> element : info)
    {
        std::cout << element.first << " " << element.second << "\t";
    }
    std::cout << std::endl;


    return 0;
}