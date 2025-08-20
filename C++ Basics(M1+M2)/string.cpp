/*why string? - string is onek dynamic. string er size amra icchamoto baraite ba komaite pari..
sheta string data type auto handle korbe + string concatenation (jora lagano) korte parbo  */


#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "I am eating rice";
    string s2 = "I am also eating dal";

    //cout<<s[0]<<endl;
    //cout<<s[1]<<s[2]<<endl;
    //cout<<s.size()<<endl;  // size() is a function to count the length of the string
    //string s3 = "I am eating rice and dal mixing";

    //string s3 = s + s2;
    //cout<<s3<<"\n";

    //To shift all the elements 1 place ahead
//    for(int i; i<s.size();i++)
//    {
//        s[i] = s[i] + 1;
//    }
//    cout<<s<<"\n";

//deelete last element from string

      s.pop_back();

//delete first element

//      s.erase(s.begin());
//      s.erase(s.begin()+1);
//      cout<<s<<endl;


//space pele string er read theme jay..solution --> getline(cin,s);
//ekhane string er 1st and last char del kore user ke output dibe

       string s8;
       cin>>s8;

       s8.erase(s8.begin());
       s8.pop_back();      // s.erase(s.begin() + s.size() - 1);
       cout<<s8<<"\n";

    return 0;
}
