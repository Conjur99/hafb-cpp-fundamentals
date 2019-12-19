#include "containers.h"
#include "csvstream.h"
#include <iostream>
#include <algorithm>
#include <iterator>

void Load_Data(std::vector<Data> &data, const std::string &input_file)
{
    csvstream csvinput(input_file);

    std::map<std::string, std::string> row;
    Data temp;

    while (csvinput >> row)
    {
        // The key is the column name
        std::cout << row["id"] << "," << row["name"]    //TODO: unfinished
        << "," << row["animal"] << std::endl;
        temp.id = row["id"];
        temp.name = row["name"];
        temp.animal = row["animal"];
        
        data.push_back(temp);       //load Data struct into vector

    }
    




}