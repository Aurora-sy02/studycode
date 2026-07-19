#pragma once
#include <string>

class Student
{
public:
    void setInfor();
    int getIDnumber();
    void showInfo();
    double calculatescore();
private:
    int _Idnumber;
    std::string _name;
    int _age;
    int _Chinesescore;
    int _Englishscore;
    int _Mathscore;
};