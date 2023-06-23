#include <vector>
#include <iostream>
#include <iomanip>

#ifndef GRADEBOOKPROJECT_GRADEBOOK_H
#define GRADEBOOKPROJECT_GRADEBOOK_H


class gradebook {
private:
    std::vector<std::string> assignments;
    std::vector<std::string> labs;
    float proj1;
    float proj2;
    float final;

public:
    gradebook();
    //functions here
    void infile(std::string fname);
    void outfile(std::string fname);
    float TotalGrade();
    void printGrade(int num,std::string category);
    void getTotCategoryGrade(std::string category);
    void changeGrade(std::string categoryW, int num, std::string newGrade);
    void printCatGrade(std::string category);

};


#endif //GRADEBOOKPROJECT_GRADEBOOK_H
