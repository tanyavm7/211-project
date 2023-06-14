#include <vector>
#include <iostream>
#include <iomanip>

#ifndef GRADEBOOKPROJECT_GRADEBOOK_H
#define GRADEBOOKPROJECT_GRADEBOOK_H


class gradebook {
private:
    std::vector<int> grades;
    std::vector<int> category;
    std::vector<int> TotGrades;

public:
    gradebook();
    //functions here
    void infile(std::string fname);
    void outfile(std::string fname);
    float TotalGrade();



};


#endif //GRADEBOOKPROJECT_GRADEBOOK_H

