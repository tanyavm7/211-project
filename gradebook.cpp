
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
    std::ifstream infile(fname);

    //if the incorrect file name is entered it fails
    if (!infile) {
        std::cout << "Failed to open file: " << fname << "\n";
        //terminates code
        throw std::runtime_error("Terminating the code.");
    }

    //read through each line in file
    //collect data and fill vectors/variables

    std::string line;
    int lineNumber = 1;
    while (std::getline(infile, line)) {
        if (lineNumber >= 2 && lineNumber <= 5) {
            assignments.push_back(line);
        }
        else if (lineNumber >= 7 && lineNumber <= 14) {
            labs.push_back(line);
        }
        else if (lineNumber == 16) {
            proj1 = stof(line);
        }
        else if (lineNumber == 17) {
            proj2 = stof(line);
        }
        else if (lineNumber == 19){
            final=stof(line);
        }
        lineNumber++;
    }

    //close file
    infile.close();
}

//rewrite the gradebook into the file with any changes
void gradebook::outfile(std::string fname){
    //open file to write
    std::fstream file;
    file.open(fname, std::ios::out);

    //close file
    file.close();
}

//function that calculates and returns the final total grade of the course
void gradebook::TotalGrade() {
    float totalgrade=0;
    std::string str;
    //add all assignment grades to totalgrade
    for (int i=0;i<4;i++) {
        //create temp string to convert into float
        str=(assignments[i]);
        //if grade not empty, add it to calculation
        if (str!="E") {
            totalgrade += std::stoi(str);
        }
        else{
            continue;
        }
    }

    //add all lab grades to totalgrade
    for (int i=0;i<8;i++) {
        //create temp string to convert into float
        str=(labs[i]);
        //if grade not empty, add it to calculation
        if (str!="E") {
            totalgrade += std::stoi(str);
        }
        else{
            continue;
        }
    }

    //add project grades to totalgrade
    totalgrade+=proj1+proj2;

    //add final exam to totalgrade
    totalgrade+=final;


    totalgrade = totalgrade/1000;
    totalgrade = totalgrade * 100;


    //totalgrade out of 1000 for final grade
    std::cout << "Your final grade is: "<<totalgrade<<"%"<<std::endl;
}

//print out a single grade
void gradebook::printGrade(int num, std::string categoryW) {

    //print out assignment grade
    if (categoryW=="assignments"){
        //num-1 in order to take correct index
        std::cout<<assignments[num-1]<<"/50"<<std::endl;
    }

        //print out lab grade
    else if (categoryW=="labs"){
        //num-1 in order to take correct index
        std::cout<< labs[num-1]<<std::endl;
    }

        //print project grade
    else if (categoryW=="projects"){

        //decide which project user wants and prints it
        if (num==1){
            std::cout<<proj1<<std::endl;
        }
        else{
            std::cout<<proj2<<std::endl;
        }
    }

        //print out final exam grade
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
        //go through all assignments and print each grade
        for (int i=0; i < assignments.size(); i++){
            std::cout<<"Assignment " << i << "grade is: " << assignments[i] << "/50" <<std::endl;
        }
    }

    else if (categoryW == "labs") {
        //go through all labs and print each grade
        for (int i = 0; i < labs.size(); i++) {std::cout<<"Lab "<< i << "grade is: " << labs[i] << "/25" <<std::endl;
        }
    }

    else if (categoryW =="projects"){
        //print project 1 and 2 grade
        std::cout<<"Project 1 grade is: " << proj1 << "/150" << "\nProject 2 grade is: "<< proj2 << "/350" <<std::endl;
    }

    else if (categoryW == "final"){
        //print final exam grade
        std::cout<<"Final Exam grade is: "<<final<< "/100" <<std::endl;
    }

    else{
        std::cout<<"Not a valid category"<<std::endl;
    }
}

//prints the total grade of a certain category
void gradebook::getTotCategoryGrade(std::string categoryW) {

    float total1=0;
    float total2=0;
    std::string str;

    //find assignment grade
    if (categoryW == "assignments"){
        for (int i=0;i<4;i++) {

            //create temp string to convert into float
            str=(assignments[i]);

            //if grade not empty, add it to calculation
            if (str!="E") {
                total1 += std::stoi(str);
            }
            else{
                continue;
            }
        }
        //print total assignment grade
        std::cout<< total1<<std::endl;
    }
        //find lab grade
    else if (categoryW == "labs"){
        for (int i=0;i<8;i++) {
            //create temp string to convert into float
            str=(labs[i]);

            //if grade not empty, add it to calculation
            if (str!="E") {
                total2 += std::stoi(str);
            }
            else{
                continue;
            }
        }
        //prints total lab grade
        std::cout<< total2<<std::endl;
    }
        //print projects grade
    else if (categoryW == "projects"){
        std::cout<<proj1+proj2<<"/500"<<std::endl;
    }
        //print final exam grade
    else if (categoryW == "final"){
        std::cout<<final<<std::endl;
    }
    else{
        std::cout<<"Not a valid category"<<std::endl;
    }
}

//change a grade within the gradebook
void gradebook::changeGrade(std::string categoryW, int num, std::string newGrade) {
    int grade;

    if (categoryW == "assignments"){
        //num-1 to get correct index
        assignments[num-1]=newGrade;
    }
    else if (categoryW == "labs"){
        //num-1 to get correct index
        labs[num-1]=newGrade;
    }
    else if (categoryW == "projects"){
        if (num==1){
            grade=std::stoi(newGrade);
            proj1=grade;
        }
        else{
            grade=std::stoi(newGrade);
            proj2=grade;
        }
    }
    else if (categoryW == "final"){
        grade=std::stoi(newGrade);
        final=grade;
    }
    else{
        std::cout<<"Not a valid category"<<std::endl;
    }
