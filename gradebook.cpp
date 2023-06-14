#include <vector>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "gradebook.h"

//constructor
gradebook::gradebook(){

}

//parse file and fill each of the respective vectors
void gradebook::infile(std::string fname){
    //open file to read
    std::fstream file;
    file.open(fname, std::ios::in);

    //read through each line in file

    //parse through file to collect data and fill vectors/variables

    //close file
    file.close();
}

//rewrite the gradebook into the file with any changes
void gradebook::outfile(std::string fname){
    //open file to write
    std::fstream file;
    file.open(fname, std::ios::out);


    //close file
    file.close();
}

//get the total grade of the course
float gradebook::TotalGrade() {
    float totalgrade;

    return totalgrade;
}

//print out a single grade
void gradebook::printGrade(int num, std::string category) {

}

//print out all grades from a category
void gradebook::printCatGrade(std::string category) {

}

//return the total grade of a certain category
float gradebook::getTotCategoryGrade(std::string category) {

}

//change a grade within the gradebook
float gradebook::changeGrade() {

}








