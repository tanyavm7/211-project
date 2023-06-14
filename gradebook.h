#include <vector>
#include <iostream>
#include <iomanip>

#ifndef GRADEBOOKPROJECT_GRADEBOOK_H
#define GRADEBOOKPROJECT_GRADEBOOK_H


class gradebook {
private:
    std::vector<int> assignments;
    std::vector<int> labs;
    std::vector<int> category;
    std::vector<int> TotCategoryGrades;
    float proj1;
    float proj2;
    float final;

public:
    gradebook();
    //functions here
    void infile(std::string fname);
    void outfile(std::string fname);
    float TotalGrade();
    void printGrade(int num,std::string category );
    float getTotCategoryGrade(std::string category);
    float changeGrade();
    void printCatGrade(std::string category);

};


#endif //GRADEBOOKPROJECT_GRADEBOOK_H
