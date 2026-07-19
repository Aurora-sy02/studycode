#pragma once
#include "Student.h"
#define MAX 1000

class StudentManager
{
public:
    void addInfoStudent();
    void showInfoStudent();
    int isExist(int IDnumber);
    void findInfoStudent();
    void showAverageScore();

private:
    Student StudentArray[MAX];
    int _size = 0;
};