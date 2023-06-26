#ifndef INC_212_GRADEBOOK_GRADEBOOK_H
#define INC_212_GRADEBOOK_GRADEBOOK_H

#include <vector>
#include <iostream>
#include <iomanip>

class gradebook {
private:
    std::vector<std::string> assignments;
    std::vector<std::string> labs;
    std::vector<std::string> projects;
    std::vector<std::string> final;


public:
    gradebook();
    //functions here
    void infile(std::string fname);
    void outfile(std::string fname);
    void TotalGrade();
    void printGrade(int num,std::string category);
    void getTotCategoryGrade(std::string category);
    void changeGrade(std::string categoryW, int num, std::string newGrade);
    void printCatGrade(std::string category);

};


#endif //INC_212_GRADEBOOK_GRADEBOOK_H
