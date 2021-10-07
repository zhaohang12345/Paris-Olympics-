/******************************************************************************

File: main.cpp
Author: Prof. Lupoli & Andrew Nemec
Date: 2/16/2021
Section: 
E-mail: slupoli@tamu.edu
Description:
This file contains C++  code that will simulate data collected from a track 
event with 9 lanes. The code will sort the order, then display the results

Updates
Author: J. Michael Moore & Paul Taele

Data File Information
name: data.csv
content: The csv file will contain data in the constant form of:
<Time (double)> <Abbreviated Country (String)> <Uniform number (int)> <Lastname (String)>
32.7 USA 12 Moore
36.5 RUS 35 Polsley
45.8 ENG 73 Teale
52.34 CHN 14 Nemec
76.45 ITY 23 Lupoli     

*******************************************************************************/

#include <iostream>
#include "parallel_tracks.h"

using std::cin; using std::cout; using std::endl;
using std::string; using std::getline; using std::ifstream;
using std::invalid_argument; using std::domain_error;

int main()
{
    string runnerName[] = {};
    unsigned int runnerJersey[] = {};
    string runnerCountry[] = {};
    double runnerTime[] = {};
    prep_double_array(runnerTime);
    prep_string_array(runnerName);
    prep_string_array(runnerCountry);
    prep_unsigned_int_array(runnerJersey);

    // TODO: create arrays needed
	
    // TOTO: prep all arrays
	
    // TODO: prompt until both the file and the contained data are valid
	
    // TODO: determine ranking, notice the rank array receives the results

    // TODO: Output results

    return 0;
}

