#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l;

//    l.push_back(1);
//    l.push_back(2);
//    l.push_front(3);
//    l.push_front(5);

    int n;
    cin>>n;
    for(int i =0; i<n; i++)
    {
        int x;
        cin>>x;
        l.push_back(x);
    }

    for(int val:l)
    {
        cout<<val<<" ";
    }
    cout<<endl;



    return 0;
}
