/*
// constructor

#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    Student(string name, int std_id, int age, string fathers_name, string mothers_name)
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age;
        this->fathers_name = fathers_name;
        this->mothers_name = mothers_name;
    }

    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<mothers_name<<" "<<fathers_name<<"\n";
    }

};


int main()
{
    Student s("A", 10233, 15, "father", "mother");
    s.print_information();

    return 0;
}

*/





/*

//Constructor overload

#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    Student(string name, int std_id, int age, string fathers_name, string mothers_name)
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age;
        this->fathers_name = fathers_name;
        this->mothers_name = mothers_name;
    }

    Student(string name, int std_id, int age)
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age;

    }

    Student()
    {
        //declared an empty constructor to avoiid empty s3 error..

    }


    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<mothers_name<<" "<<fathers_name<<"\n";
    }

};


int main()
{
    Student s("A", 10233, 15, "father", "mother");
    s.print_information();

    Student s2("B", 10235, 15, "father2", "mother2");
    s2.print_information();

    Student s3;

    return 0;
}
*/









//.............Destructor...............


#include<bits/stdc++.h>
using namespace std;


class Person
{
public:

    string name;
    Person *father, *mother;

    Person()
    {
        father = NULL;
        mother = NULL;
    }

    Person(string name,string f_name, string m_name)
    {
        this->name = name;
        father = new Person;
        father->name = f_name;
        mother = new Person;
        mother->name = m_name;

    }

    void print_info()
    {
        cout<<"Name"<<name<<"\n";
        cout<<"Fathers name = "<<father->name<<"\n";
        cout<<"Mothers name = "<<mother->name<<"\n";

    }

    ~Person()
    {
        if(father != NULL)
            cout<<"called"<<"\n";
            delete father;
        if(mother != NULL)
            delete mother;
    }


};




int main()
{
    Person p("A", "B", "C");
    p.print_info();

    return 0;
}

