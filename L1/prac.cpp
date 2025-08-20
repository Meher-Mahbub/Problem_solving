
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>a;
    for(int i=0; i<10; i++)
        a.push_back(i);

    a.insert(a.begin(),100);
    a.erase(a.begin()+1);
    a.pop_back();
    a.resize(5);
    for(int i=0; i<a.size(); i++)
        cout<<a[i]<<"\n";






    return 0;

}
