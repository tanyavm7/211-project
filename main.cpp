#include <vector>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

#include "gradebook.h"

int main(int argc, char* argv[]) {
    //create object Gradebook
    gradebook gradebook;

    //takes the file name entered in the CLA
    std::string fname = argv[1];

    //read through the Gradebook text file
    gradebook.infile(fname);

    //get the total grade that the student currently has
    int input;
    std::cout<<"Welcome to your grade book. "<<std::endl;
    //used to initialize loop by gaining input for variable "input"
    std::cout << "If you want to know your current grade in the class, input 1." << std::endl;
    std::cout << "If you want to find a certain grade in a specific category and assignment, input 2." << std::endl;
    std::cout << "If you want to know your total grade in a specific category, input 3." << std::endl;
    std::cout << "If you want to change a grade in your grade book, input 4." << std::endl;
    std::cout << "If you want to see all your grades in a specific category, input 5." << std::endl;
    std::cout << "If you want all the grades, input 6." << std::endl;
    std::cout << "If you finish with the grade book, input 7." << std::endl;

    std::cin >> input;
    while(input != 7)
    {
        if(input == 1) // get final grade
        {
            gradebook.TotalGrade();
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

            gradebook.printGrade(num, category);
        }
        else if(input == 3) // get a specific category grade
        {
            std::string category;
            std::cout << "Please input the category. For example, labs, assignments, projects, final." << std::endl;
            std::cin >> category;
            std::cout << "Your grade for " << category << " is..." <<std::endl;

            gradebook.getTotCategoryGrade(category);
        }
        else if(input == 4) {
            std::string category;
            int num;
            std::string newGrade;
            std::cout << "Please input the category. For example, labs, assignments, projects." << std::endl;
            std::cin >> category;
            std::cout << "Please input the assignment number you would like to change. For example, if you want to search lab 3, then input 3."
                      << std::endl;
            std::cin >> num;
            std::cout << "Please input the grade you want to change. For example, 25."<< std::endl;
            std::cin >> newGrade;

            gradebook.changeGrade(category, num, newGrade);
        }
        else if(input == 5)
        {
            std::string category;
            std::cout << "Please input the category. For example, labs, assignments, projects, final." << std::endl;
            std::cin >> category;

            gradebook.printCatGrade(category);
        }
        else if(input == 6)
        {
            std::string category1 = "labs";
            gradebook.printCatGrade(category1);
            std::string category2 = "assignments";
            gradebook.printCatGrade(category2);
            std::string category3 = "projects";
            gradebook.printCatGrade(category3);
            std::string category4 = "final";
            gradebook.printCatGrade(category4);
        }
        
        else
        {
            std::cout << "Looks like you input the wrong number, please try again." << std::endl;
        }

        std::cout << "If you want to know your final grade in the class, please input 1." << std::endl;
        std::cout << "If you want to know a single grade in a specific category and assignment, please input 2." << std::endl;
        std::cout << "If you want to know your grades in a specific category, please input 3." << std::endl;
        std::cout << "If you want to change a grade in your grade book, please input 4." << std::endl;
        std::cout << "If you want all grades for a category, please input 5." << std::endl;
        std::cout << "If you want all the grades, please input 6." << std::endl;
        std::cout << "If you finish with the grade book, please input 7." << std::endl;

        std::cin >> input;

    }
    
    std::cout << "Thank you for using the grade book." << std::endl;
    
    //update Gradebook
    gradebook.outfile(fname);

    return 0;
}
