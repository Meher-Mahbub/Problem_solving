// set<int>s;  stores unique values sorted in a particular order

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;

    s.emplace(1);
    s.emplace(5);
    s.emplace(3);

    for(auto val:s)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}

// unordered_set   *** frequrntly used in DSA questions
// no duplicate
// random order
//Time complexity --> O(1)
// No low or upper bound --> dont work

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>s;         ///  1 2 2 3 3  5
    unordered_set<int>s;    ///  1 2 3 5

    s.emplace(1);
    s.emplace(2);
    s.emplace(5);
    s.emplace(3);

    s.insert(2);
    s.insert(3);

    for(auto val:s)
    {
        cout<<val<<" ";     //
    }
    cout<<endl;

    return 0;
}
