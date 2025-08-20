//stack<int>s;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
//    s.push(1);
//    s.push(2);
//    s.push(3);

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }


    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    cout<<endl;

    //cout<<"Top = "<<s.top()<<endl;
    return 0;
}
