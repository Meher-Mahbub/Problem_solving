#include<bits/stdc++.h>

using namespace std;

namespace Info{
    vector<int>a = {1,2,3,4,5};

    void resizeA()
    {
        a.resize(5);
    }

}

int main()
{
    vector<int>a;
    for(int i=0;i<10;i++)
    {
//       cout<<"Before push"<<a.size()<<endl;
       a.push_back(i);
//       cout<<"After push"<<a.size()<<endl;
    }
    a.insert(a.begin()+1,100);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }

    a.erase(a.begin()+1);   // Delete
    a.pop_back();          // Delete last element
    cout<<"After delete"<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }

    cout << "Namespace Info::a:" << endl;
    Info::resizeA();
    for(int i=0;i< Info::a.size();i++)
        cout<<Info::a[i]<<endl;

    return 0;

}
