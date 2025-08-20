//Public and private

#include<bits/stdc++.h>

using namespace std;

class Student{
private:
    string name;

public:

    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    void print_information(){
        cout<<name<<" "<<std_id<<" "<<age<<" "<<mothers_name<<" "<<fathers_name<<"\n";

    }

    void setInformation(string s, int id, int ag)  //private gulor value set korar jonno
    {
        name = s;
        std_id = id;
        age = ag;
    }

};


int main()
{
    Student s;
    s.setInformation("A", 10, 20);

    s.print_information();
    return 0;
}


/*

//Protected

class User
{
//private:
protected:  // name, age ke ekmatro tarai access korte parbe jara User class ke inherit koreche
    string name;
    int age;

};

class Admin: User{
private:
    string designation;
public:
    void Set(string s, int ag, string dg)
    {
        name = s;
        age = age;
        designation = dg;
    }

    void print()
    {
        cout<<name<<"\n";
        cout<<age<<"\n";
        cout<<designation<<"\n";
    }

};

int main()
{
    Admin ad;
    ad.Set("A", 20, "D");
    ad.print();

    return 0;
}

*/


