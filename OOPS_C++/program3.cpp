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

    Teacher()//non parameterized constructor
    {
        cout<<"inside Constructor"<<endl;
        dept="computer";
    }

//methods/member functions




};


int main(){

    Teacher t1;//constructor call ...automatically when new object is created

    Teacher t2;//again object is made so a constructor we made will get called

    t1.name="Trupti";
    
    t1.subject="C++";
    // t1.salary=200000.00;gives error as it is private

    cout<<t1.name<<endl;

   cout<<t1.dept<<endl;//automatically we get computer as it is initialized in coonstructor;

    return 0;

}