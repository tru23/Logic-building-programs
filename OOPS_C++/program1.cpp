#include<iostream>
#include<string>

using namespace std;

class Teacher{
//properties
private:
double salary;
public:
string name;
string dept; 
string subject;
// double salary;

//methods/member functions

void changeDept(string newDept)
{
    dept=newDept;
}

void setSalary(double s)
{
    salary=s;
}
double getSalary()
{
    return salary;
}


};


int main(){

    Teacher t1;

    t1.name="Trupti";
    t1.dept="computer";
    t1.subject="C++";
    // t1.salary=200000.00;gives error

    cout<<t1.name<<endl;

    t1.setSalary(35000);
    long iret=t1.getSalary();
    cout<<"salary is "<<iret;

    return 0;

}