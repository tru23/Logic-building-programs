#include<iostream>
#include<string>

using namespace std;

class Teacher{
//properties/attributes

private:

    double salary;

public:


    string name;
    string dept; 
    string subject;
    // double salary;

    Teacher(string n,string d,string s,double sal)//parameterized constructor
    {
        cout<<"inside Constructor"<<endl;
        name=n;
        dept=d;
        subject=s;
        salary=sal;
    }

    //copy Constructor custom made
    Teacher(Teacher &orjobj)//pass by reference
    {
        cout<<"Inside copy constructor";
        this->name=orjobj.name;
        this->subject=orjobj.subject;
        this->dept=orjobj.dept;
        this->salary=orjobj.salary;

    }

//methods/member functions

void getInfo()
{
    cout<<"name:"<<name<<endl;
    cout<<"subject:"<<subject<<endl;
}


};


int main(){

//     // Teacher t1;//constructor call ...automatically when new object is created

//     // Teacher t2;//again object is made so a constructor we made will get called

//     t1.name="Trupti";
    
//     t1.subject="C++";
//     // t1.salary=200000.00;gives error as it is private

//     cout<<t1.name<<endl;

//    cout<<t1.dept<<endl;//automatically we get computer as it is initialized in coonstructor;

Teacher t1("trupti","Computer science","C++",20000);

// t1.getInfo();//For parameterized

Teacher t2(t1);//automaticaly copy constuctor

t2.getInfo();

    return 0;

}