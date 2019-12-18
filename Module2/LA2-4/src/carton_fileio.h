/**
 * @file carton_fileio.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-18
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#pragma once

#include <array>
#include <string>
#include "carton.h"
#include "carton_fileio.h"

const int kMaxArraySize = 20;

string ReadDataFormatFromFile(string filename, 
        array<Carton, kMaxArraySize>& cartons,      //Ref to array
        int& rec_num);                               //The number of records loaded

void WriteDataToFile(string filename,
        const array<Carton, kMaxArraySize>& cartons,
        int rec_num);        