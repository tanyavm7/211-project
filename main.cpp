#include <vector>
#include <iostream>
#include <iomanip>

#include "gradebook.h"

int main(int argc, char* argv[]) {
    //create object Gradebook
    gradebook gradebook;

    //CLA collects file name
    std::string fname = argv[1];

    //read through the Gradebook text file
    gradebook.infile(fname);

    //get the total grade that the student currently has
    std::cout<<"Welcome to your gradebook\nYour current grade as of now is: "<<std::endl;
    gradebook.TotalGrade();

    //update Gradebook
    gradebook.outfile(fname);

    return 0;
}

