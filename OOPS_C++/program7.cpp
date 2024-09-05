#include<iostream>
#include<string>

using namespace std;

class Person{
    public:

    string name;
    int age;

    // Person(string name,int age){
    //     this->name=name;
    //     this->age=age;

    // }
    Person()
    {
        cout<<"inside base parent class constructor"<<endl;

    }
   ~ Person()
    {
        cout<<"inside base parent class destructor"<<endl;

    }


};

class Student :public Person
{
//name,age,roll no

public:
        int roll;

        Student()
        {
            cout<<"child constructor"<<endl;
        }
        
        ~Student()
        {
            cout<<"child destructor"<<endl;
        }

        void getInfo()
        {
            cout<<"name"<<name<<endl;
            cout<<"age"<<age<<endl; 
            cout<<"roll no"<<roll<<endl;
        }

};


int main(){


    Student s1;
    s1.name="Trupti";
    s1.age=22;
    s1.roll=1311;

    s1.getInfo();


  

    return 0;

}