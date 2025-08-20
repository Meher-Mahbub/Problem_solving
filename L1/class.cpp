#include<bits/stdc++.h>

using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    void print_information(){
        cout<<name<<" "<<std_id<<" "<<mothers_name<<" "<<fathers_name<<"\n";

    }

};


class Rectangle{
public:
    int width,height;
    Student s;      // onno class er data type o use korte parbo

    int calculate_area(){
        return width * height;

    }
    int calculate_perimeter(){
        return 2*(height+width);

    }

};

//class gulake chaile amra recursive kore felte pari (last part of vid)

class Person{
public:
    string name;
    Person *father, *mother;  //fath, moth tarao to person..trao ei class eri member/object
                            //but person er obj na nie pointer nibo..tokhn ar eta obj hishebe count hbe na..pointer hbe (to avoid infinite recursion)
                            //so jokhn memory allocate korbo tokhni jinishta amar kase ashbe.tokhn eta cls er obj thakbe na..obj er pointer thakbe.
                            // N.B : Ekhn pointer newar por egula koi point korbe shetao bole dite hbe... new die shei kajta korlam..see in main function.
    void print_info(){
        cout<<"Name"<<name<<"\n";
        cout<<"Fathers name ="<<father->name<<"\n"; //father obj er father er je name ache take access korlam..nijer class er multilevel --> recursive
        cout<<"Mothers name ="<<mother->name<<"\n";  // jokhn ekta pointer type obj er kono ekta data ke access korbo tokhn . er bodole -> use krbo

    }

};

int main()
{
    Person p;
    // pointer gulo point korbe koi ta bolbo
    p.father = new Person;  // person class er ekta new obj nie p.father ke sekhane point kore dilam
    p.mother = new Person;  // so, obj pointer gulo memoryr 2 ta jayga point kore felse
    p.name = "A";
    p.father->name = "B";
    p.mother->name = "C";
    p.print_info();
//    Rectangle r1,r2;
//    r1.height = 4;
//    r1.width = 8;
//    cout<<r1.calculate_area()<<"\n";
//    cout<<r1.calculate_perimeter()<<"\n";
//
//    r2.height = 5;
//    r2.width = 9;
//    cout<<r2.calculate_area()<<"\n";
//    cout<<r2.calculate_perimeter()<<"\n";
//    r1.s.name = 'X';
//
//    r1.s.print_information();


//    Student s;
//    s.name = "Pranto";
//    s.std_id = 1;
//    s.age = 14;
//    s.fathers_name = "Farid Ahmed";
//    s.mothers_name = "Parvin";
//
//    s.print_information();
//
//    Student s2;
//    s2.name = "Shajin";
//    s2.std_id = 2;
//    s2.age = 14;
//    s2.fathers_name = "nasum";
//    s2.mothers_name = "Protikkha";
//
//    s2.print_information();


    return 0;
}
