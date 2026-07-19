#include "StudentManager.h"
#include <iostream>
using namespace std;

void StudentManager::addInfoStudent()
{
    Student s;
    s.setInfor();
    StudentArray[this->_size] = s;
    this->_size++;
    system("pause");
    system("cls");
}

void StudentManager::showInfoStudent()
{
    if (this->_size == 0)
    {
        cout << "There is no student" << endl;
    }
    else
    {
        for (int i = 0; i < this->_size; i++)
        {
            this->StudentArray[i].showInfo();
        }
    }
    system("pause");
    system("cls");
}

int StudentManager::isExist(int IDnumber)
{
    for (int i = 0; i < this->_size; i++)
    {
        if (this->StudentArray[i].getIDnumber() == IDnumber)
        {
            return i;
        }
    }
    return -1;
}

void StudentManager::findInfoStudent()
{
    cout << "please input the IDnumber you are looking for" << endl;
    int IDnumber;
    cin >> IDnumber;
    int ret = isExist(IDnumber);

    if (ret != -1)
    {
        this->StudentArray[ret].showInfo();
    }
    else
    {
        cout << "There is on such student" << endl;
    }

    system("pause");
    system("cls");
}

void StudentManager::showAverageScore()
{
    for (int i = 0; i < this->_size; i++)
    {
        cout << this->StudentArray[i].getIDnumber() << " : ";
        cout << this->StudentArray[i].calculatescore() << endl;
    }
    system("pause");
    system("cls");
}