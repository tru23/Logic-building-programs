#include<iostream>
#include<string>

using namespace std;


class Person
{

public:
        string name;  
        int age;
 
};

class Student: public Person
{
public:
        int roll;
};


class Teacher:public Person
{
    public:
    string subject;

       
};


int main(){


    Student t1;
    t1.name="Trupti";
    
    t1.roll=1311;
    t1.age=21;
 

    cout<<t1.name<<endl;
    cout<<t1.roll<<endl;
    cout<<t1.age<<endl;
 

    return 0;

}