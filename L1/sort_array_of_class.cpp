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




    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<mothers_name<<" "<<fathers_name<<"\n";
    }

    //operator overloading die sorting (comp er  alternative)
    bool operator < (Student s)
    {
        return std_id < s.std_id;
    }

    /*
    // operator overloading ex:

    Student operator + (Student s)
    {
        return std_id + s.std_id ; //ki hishebe return korbo icchemoto likhte parbo
    }

    */

};

bool comp(Student a, Student b)
{
    // when a is less than b
    return a.std_id < b.std_id;
}


int main()
{
    // mone kori student class er ekta array or vector declare kori
    vector<Student>a;
    for(int i=0; i<10; i++){
            a.push_back(Student("A", 20-i, 20));

    }


    for(int i=0; i<10; i++){
        a[i].print_information();
    }

    cout<<"After sorting\n";
    //sort(a.begin(),a.end());  // eta jane int,double ba string sort korte ,
                              // ammader banano datatype kivabe sort korbe she jane na..
//ejoono comp (nijossho func amader jeta likhbo nijera)

    sort(a.begin(),a.end(), comp);

    for(int i=0; i<10; i++){
        a[i].print_information();
    }


    return 0;
}









