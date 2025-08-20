
// Same as List. Diff --> List is Doubly Linked List and
                         // Deque implemented with the help of Dynamic Array. So Random access possible

#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>d;

//    d.push_back(1);
//    d.push_back(2);
//    d.push_front(3);
//    d.push_front(5);

    int n;
    cin>>n;
    for(int i =0; i<n; i++)
    {
        int x;
        cin>>x;
        d.push_back(x);
    }


    for(int val:d)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}

