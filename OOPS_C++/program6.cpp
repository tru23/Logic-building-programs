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
    ~Teacher()//destructor
    {
        cout<<"inside destructor"<<endl;

    }

//methods/member functions

void getInfo()
{
    cout<<"name:"<<name<<endl;
    cout<<"subject:"<<subject<<endl;
}


};


int main(){


Teacher t1("trupti","Computer science","C++",20000);


t1.getInfo();

    return 0;

}