#include "Student.h"
#include <iostream>
using namespace std;

void Student::setInfor()
{
    int Idnumber;
    cout << "please input IDnumber" << endl;
    cin >> Idnumber;
    this->_Idnumber = Idnumber;

    string name;
    cout << "please input name" << endl;
    cin >> name;
    this->_name = name;

    int age;
    cout << "please input age" << endl;
    cin >> age;
    this->_age = age;

    int Chinesescore;
    cout << "please input the score of Chinese" << endl;
    cin >> Chinesescore;
    this->_Chinesescore = Chinesescore;

    int Englishscore;
    cout << "please input the score of English" << endl;
    cin >> Englishscore;
    this->_Englishscore = Englishscore;

    int Mathcore;
    cout << "please input the score of Math" << endl;
    cin >> Mathcore;
    this->_Mathscore = Mathcore;
}

int Student::getIDnumber()
{
    return this->_Idnumber;
}

void Student::showInfo()
{
    cout << "ID: " << this->_Idnumber << "\t";
    cout << "name: " << this->_name << "\t";
    cout << "age: " << this->_age << "\t";
    cout << "Chinese: " << this->_Chinesescore << "\t";
    cout << "English: " << this->_Englishscore << "\t";
    cout << "Math: " << this->_Mathscore << endl;
}

double Student::calculatescore()
{
    return (1.0*this->_Chinesescore+this->_Englishscore+this->_Mathscore)/3;
}