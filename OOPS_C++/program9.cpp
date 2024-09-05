#include<iostream>
#include<string>

using namespace std;


class Student
{

public:
        string name;  
        int roll; 
 
};

class Teacher
{
public:
        string subject;
        double salary;  
};


class TA :public Student, public Teacher
{

       
};


int main(){


    TA t1;
    t1.name="Trupti";
    
    t1.roll=1311;
    t1.subject="physics";
    t1.salary=20000;

    cout<<t1.name<<endl;
    cout<<t1.roll<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.salary<<endl;

    return 0;

}