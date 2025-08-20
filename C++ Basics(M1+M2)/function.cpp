#include<bits/stdc++.h>

using namespace std;

string erase_first_last(string s)
{
    s.erase(s.begin());
    s.pop_back();

    return s;
}

void erase_first_last2(string &s)    //&s dile ebar ar copy na...s ei(memory te point kore dey) cng hbe
{
    s.erase(s.begin());
    s.pop_back();
    cout<<"In function s="<<s<<endl;


}

void Swap(int &x,int &y)  //& use er jonnr locally globally shbkhane cng hbe
{

    int z = x;
    x=y;
    y=z;
}

int main()
{
    string s;
    cin>>s;
    string ans = erase_first_last(s);   // s er copy te change hbe..s e hbe na
    cout<<s<<endl;
    cout<<ans<<endl;

    erase_first_last2(s);
    cout<<s<<endl;

      int a,b;
      cin>>a>>b;
      Swap(a,b);    //func return nothing
      cout<<a<<" "<<b<<"\n";
      return 0;
}

