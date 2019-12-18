/**
 * @file carton_fileio.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-18
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#pragma once

#include "carton_fileio.h"
#include "carton.h"
#include <fstream>

string ReadDataFormatFromFile(string filename, 
        array<Carton, kMaxArraySize>& cartons,      
        int& rec_num)
{
    std::ifstream data_input(filename);     //create file handler
    if(data_input.fail())
    {
        return "Unable to open file";       //string returned
    }

    std::string message = "";
    double side1, side2, side3;             //read data from file

    //Load data
    while(rec_num < kMaxArraySize && data_input >> side1)
    {
        data_input >> side2 >> side3;
        
        // Load data into array
        try
        {
        carton[rec_num] = Carton(side1, side2, side3);
        rec_num += 1;                       //counts records
        }
        catch(const std::out_of_range error)
        {
            message += error.what();
            message += "\n";
        }
        
        carton[rec_num] = Carton(side1, side2, side3);
        rec_num += 1;                       //counts records


    }    
    data_input.close();

    return message;
}

void WriteDataToFile( string filename, const array<Carton, kMaxArraySize>& cartons, int rec_num)
{
    ofstream file_out(filename);

    // if(file_out.fail()   //     //TODO return error
    // {
    //     return 1;
    // })
    for(int index =0; index <rec_num; ++index)
    {
        cartons[index].WriteData(file_out);
    }
}