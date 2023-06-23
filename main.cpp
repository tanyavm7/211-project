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
    int input;
    std::cout<<"Welcome to your grade book. "<<std::endl;
    while(input != 5)
    {
        std::cout << "If you want to know your final grade in the class, please input 1." << std::endl;
        std::cout << "If you want to know a single grade in a specific category and assignment, please input 2." << std::endl;
        std::cout << "If you want to know your grades in a specific category, please input 3." << std::endl;
        std::cout << "If you want to change a grade in your grade book, please input 4." << std::endl;
        std::cout << "If you finish with the grade book, please input 5." << std::endl;

        std::cin >> input;

        if(input == 1) // get final grade
        {
            std::cout << "Your final grade is..." << std::endl;
            float grade;

            gradebook.TotalGrade();

            std::cout << grade << std::endl;
        }
        else if(input == 2) // get a specific grade
        {
            std::string category;
            int num;
            std::cout << "Please input the category. For example, labs, assignments, projects." << std::endl;
            std::cin >> category;
            std::cout << "Please input the number of category. For example, if you want to search lab 3, then input 3." << std::endl;
            std::cin >> num;
            std::cout << "Your grade for " << category << " " << num << " is..." << std::endl;



            std::cout << grade << std::endl;
        }
        else if(input == 3) // get a specific category grade
        {
            std::string category;
            std::cout << "Please input the category. For example, labs, assignments, projects." << std::endl;
            std::cin >> category;
            std::cout << "Your grade for " << category << " is..." <<std::endl;



            std::cout << grade << std::endl;
        }
        else if(input == 4) {
            std::string category;
            int num;
            float grade;
            std::cout << "Please input the category. For example, labs, assignments, projects." << std::endl;
            std::cin >> category;
            std::cout << "Please input the number of category. For example, if you want to search lab 3, then input 3."
                      << std::endl;
            std::cin >> num;
            std::cout << "Please input the grade you want to change. For example, 25."
            std::cin >> grade;


        }
        else if(input == 5)
        {
            std::cout << "Thank you for using the grade book." << std::endl;
        }
        else
        {
            std::cout << "Looks like you input the wrong number, please try again." << std::endl;
        }



    }

    //update Gradebook
    gradebook.outfile(fname);

    return 0;
}
