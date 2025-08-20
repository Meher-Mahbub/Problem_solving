#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;


    Student(string name, int std_id, int age)   // student er ekta constructor create kore nilam..
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age;

    }

    Student()
    {

    }



    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<mothers_name<<" "<<fathers_name<<"\n";
    }

};


int main()
{
    Student s[10];
    for(int i=0; i<10; i++)
        s[i] = Student("A", i, 13);   // 10 ta object create holo student er, jader name,age same but id different..
    for(int i=0; i<10; i++)
        s[i].print_information();


    return 0;
}








