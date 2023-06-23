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
    float totalgrade=0;

    for (int i=0;i<4;i++){
        totalgrade+=category[i];
    }

    return totalgrade;
}

//print out a single grade
void gradebook::printGrade(int num, std::string categoryW) {
    if (categoryW=="assignments"){
        std::cout<<assignments[num]<<std::endl;
    }
    else if (categoryW=="labs"){
        std::cout<< labs[num]<<std::endl;
    }
    else if (categoryW=="projects"){
        if (num==1){
            std::cout<<proj1<<std::endl;
        }
        else{
            std::cout<<proj2<<std::endl;
        }
    }
    else if (categoryW=="final"){
        std::cout<<final<<std::endl;
    }
    else{
        std::cout<<"Not a valid category"<<std::endl;
    }

}

//print out all grades from a category
void gradebook::printCatGrade(std::string categoryW) {
    if (categoryW == "assignments"){
        for (int i=0; i < assignments.size(); i++){
            std::cout<<"Assignment " << i << "grade is: " << assignments[i] << "/50" <<std::endl;
        }
    }
    else if (categoryW == "labs") {
        for (int i = 0; i < labs.size(); i++) {
            std::cout<<"Lab "<< i << "grade is: " << labs[i] << "/25" <<std::endl;
        }
    }
        else if (categoryW =="projects"){
            std::cout<<"Project 1 grade is: " << proj1 << "/150" << "\nProject 2 grade is: "<< proj2 << "/350" <<std::endl;
            }
        else if (categoryW == "final"){
            std::cout<<"Final Exam grade is: "<<final<< "/100" <<std::endl;
        }
        else{
            std::cout<<"Not a valid category"<<std::endl;
        }
}

//return the total grade of a certain category
float gradebook::getTotCategoryGrade(std::string categoryW) {

    if (categoryW == "assignments"){
        std::cout<< category[0]<<std::endl;
    }
    else if (categoryW == "labs"){
        std::cout<< category[1]<<std::endl;
    }
    else if (categoryW == "projects"){
        std::cout<<category[2]<<std::endl;
    }
    else if (categoryW == "final"){
        std::cout<<final<<std::endl;
    }
    else{
        std::cout<<"Not a valid category"<<std::endl;
    }
}

//change a grade within the gradebook
float gradebook::changeGrade(std::string categoryW, int num, float newGrade) {
    if (categoryW == "assignments"){
        assignments[num]=newGrade;
    }
    else if (categoryW == "labs"){
        labs[num]=newGrade;
    }
    else if (categoryW == "projects"){
        if (num==1){
            proj1=newGrade;
        }
        else{
            proj2=newGrade;
        }
    }
    else if (categoryW == "final"){
        final=newGrade;
    }
    else{
        std::cout<<"Not a valid category"<<std::endl;
    }
}








