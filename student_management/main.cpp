#include"Student.h"
#include"StudentManager.h"
#include<iostream>
using namespace std;


void showmenu()
{
    cout<<"1. add student information"<<endl;
    cout<<"2. show all students' information"<<endl;
    cout<<"3. find student's information based on IDnumber"<<endl;
    cout<<"4. show all students' average scores"<<endl;
    cout<<"0. quit system"<<endl;

}

int main(){
    StudentManager sm;

    while(true)
    {
        showmenu();
        int number;
        cin>>number;

        switch (number)
        {
        case 1:
            sm.addInfoStudent();
            break;
        case 2:
            sm.showInfoStudent();
            break;
        case 3:
            sm.findInfoStudent();
            break;
        case 4:
            sm.showAverageScore();
            break;
        case 0:
            cout<<"Welcome to use it next time"<<endl;
            system("pause");
            return 0;
        default:
            break;
        }

    }
    return 0;
}