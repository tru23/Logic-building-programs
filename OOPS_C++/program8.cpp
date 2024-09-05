#include<iostream>
#include<string>

using namespace std;

class Person{
    public:

    string name;
    int age;

   
};

class Student :public Person
{
//name,age,roll n
public:
        int roll;   
};
class gradStudent :public Student
{
//name,age,roll n
public:
        string researchArea;;   
};


int main(){


    gradStudent s1;
    s1.name="Trupti";
    s1.age=22;
    s1.roll=1311;
    s1.researchArea="physics";

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.roll<<endl;
    cout<<s1.researchArea<<endl;

    return 0;

}