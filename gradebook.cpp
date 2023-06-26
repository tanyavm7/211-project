
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
        else if (lineNumber >= 16 && lineNumber <= 17) {
            projects.push_back(line);
        }
        else if(lineNumber == 19)
        {
            final.push_back(line);
        }

        lineNumber++;
    }

    //close file
    infile.close();
}

//rewrite the gradebook into the file with any changes
void gradebook::outfile(std::string fname){

    //open file to write
    std::ofstream file (fname);

    //while file is open, write
    if (file.is_open())
    {
        //Writes title of category, followed by the assignments in that category
        file << "Assignments\n";
        for(int i=0;i<4;i++) {

            file << assignments[i]<< "\n";
        }
        file << "Labs\n";
        for(int i=0;i<8;i++) {

            file << labs[i]<< "\n";
        }
        file << "Projects\n";
        for(int i=0;i<2;i++) {

            file << projects[i]<< "\n";
        }
        file << "Final\n";

        file << final[0]<< "\n";

        file.close();
    }
    else std::cout << "Unable to open file";
}


//function that calculates and returns the final total grade of the course
void gradebook::TotalGrade() {
    float totalgrade=0;
    std::string str;
    //add all assignment grades to totalgrade
    for (int i=0;i<4;i++) {
        //create temp string to convert into float
        //str=(assignments[i]);
        //if grade not empty, add it to calculation
        if (assignments[i]!="E") {
            totalgrade += std::stof(assignments[i]);
        }
        else{
            continue;
        }
    }

    //add all lab grades to totalgrade
    for (int i=0;i<8;i++) {
        //create temp string to convert into float
        //str=(labs[i]);
        //if grade not empty, add it to calculation
        if (labs[i]!="E") {
            totalgrade += std::stof(labs[i]);
        }
        else{
            continue;
        }
    }

    //add project grades to totalgrade
    for (int i=0;i<projects.size();i++) {
        //create temp string to convert into float
        //str=(labs[i]);
        //if grade not empty, add it to calculation
        if (projects[i]!="E") {
            totalgrade += std::stof(projects[i]);
        }
        else{
            continue;
        }
    }

    //totalgrade+=std::stof(projects[0])+std::stof(projects[1]);

    //add final exam to totalgrade
    if(final[0]!="E")
    {
        totalgrade+=std::stof(final[0]);
    }



    //totalgrade out of 1000 for final grade
    std::cout << "Your final grade is: "<<totalgrade<<"/1000"<<std::endl;
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
        std::cout<< labs[num-1]<<"/25"<<std::endl;
    }

        //print project grade
    else if (categoryW=="projects"){

        //decide which project user wants and prints it
        if (num==1){
            std::cout<<projects[0]<<"/150"<<std::endl;
        }
        else{
            std::cout<<projects[1]<<"/350"<<std::endl;
        }
    }

        //print out final exam grade
    else if (categoryW=="final"){
        std::cout<<final[0]<<"/100"<<std::endl;
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
            std::cout<<"Assignment " << i+1 << "grade is: " << assignments[i] << "/50" <<std::endl;
        }
    }

    else if (categoryW == "labs") {
        //go through all labs and print each grade
        for (int i = 0; i < labs.size(); i++) {std::cout<<"Lab "<< i+1 << "grade is: " << labs[i] << "/25" <<std::endl;
        }
    }

    else if (categoryW =="projects"){
        //print project 1 and 2 grade
        std::cout<<"Project 1 grade is: " << projects[0] << "/150" << "\nProject 2 grade is: "<< projects[1] << "/350" <<std::endl;
    }

    else if (categoryW == "final"){
        //print final exam grade
        std::cout<<"Final Exam grade is: "<<final[0]<< "/100" <<std::endl;
    }

    else{
        std::cout<<"Not a valid category"<<std::endl;
    }
}

//prints the total grade of a certain category
void gradebook::getTotCategoryGrade(std::string categoryW) {

    float total1=0;
    float total2=0;

    //find assignment grade
    if (categoryW == "assignments"){
        for (int i=0;i<4;i++) {

            //if grade not empty, add it to calculation
            if (assignments[i]!="E") {
                total1 += std::stof(assignments[i]);
            }
            else{
                continue;
            }
        }
        //print total assignment grade
        std::cout<< total1<<"/200"<<std::endl;
    }
        //find lab grade
    else if (categoryW == "labs"){
        for (int i=0;i<8;i++) {

            //if grade not empty, add it to calculation
            if (labs[i]!="E") {
                total2 += std::stof(labs[i]);
            }
            else{
                continue;
            }
        }
        //prints total lab grade
        std::cout<< total2<<"/200"<<std::endl;
    }
        //print projects grade
    else if (categoryW == "projects"){
        float proj_tot=0;
        for (int i = 0; i < projects.size(); i++)
        {
            if (projects[i]!="E")
            {
                proj_tot+=std::stof(projects[i]);
            }
        }
        std::cout<<proj_tot<<"/500"<<std::endl;
    }
        //print final exam grade
    else if (categoryW == "final"){
        std::cout<<final[0]<<"/100"<<std::endl;
    }
    else{
        std::cout<<"Not a valid category"<<std::endl;
    }
}

//change a grade within the gradebook
void gradebook::changeGrade(std::string categoryW, int num, std::string newGrade) {

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
            projects[0]=newGrade;
        }
        else{
            projects[1]=newGrade;
        }
    }
    else if (categoryW == "final"){
        final[0]=newGrade;
    }
    else{
        std::cout<<"Not a valid category"<<std::endl;
    }
}
