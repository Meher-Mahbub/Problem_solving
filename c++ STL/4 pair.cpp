/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int>p = {3, 5};
    pair<char, int>p2 = {'a', 1};

    pair<int, pair<int, int>>p3 = {1,{3,4}};                            //pair of pairs
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;

    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}
*/

// we can create vector of pair like pair of pair

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>vec; //{{1,2},{2,3},{3,4}};
//    vec.push_back({4,5});
//    vec.push_back({5,6});
//    vec.emplace_back(7,8);

    for(int i=0; i<n; i++)
    {
        int first,second;
        cin>>first>>second;
        vec.push_back({first,second});
    }

    for(auto p:vec)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}
