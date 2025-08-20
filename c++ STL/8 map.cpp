/*
map<string, int>m;
m['tv']= 100;
m['laptop'] = 50;
m['headphone'] = 150;

stores the datas in sorted order(Asc).

map doesnt allow duplicate key.. so to store multiple of same key use multimap -->
    multimap<string, int>m;
    m.emplace("tv",100);
    m.emplace("tv",100);

    m.erase("tv");          all delete
    m.erase(m.find("tv"));  del 1 element by iterator pass


*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int>m;
    m["tv"]= 100;
    m["laptop"] = 50;
    m["headphone"] = 150;
    m["tabs"]= 100;

    m.insert({"camera", 25});  //m.emplace("camera", 25);
    cout<<m["laptop"]<<endl;   // to print the value

    m.erase("tv");

    if(m.find("camera")!= m.end())
    {
        cout<<"Found\n";
    }
    else
    {
        cout<<"Not found\n";
    }

    for(auto p : m)
    {
        cout<<p.first<<" "<<p.second<<endl;

    }
    return 0;

}


// *****Unordered Map*****// --> To store the data at any order means any data can print anywhere or anyorder

// no duplicate key values



#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int>m;
    m.emplace("watch",100);
    m["tv"]= 100;
    m["laptop"] = 100;
    m["headphone"] = 100;
    m["tabs"]= 100;

    m.insert({"camera", 25});  //m.emplace("camera", 25);
    cout<<m["laptop"]<<endl;   // to print the value

    m.erase("tv");

    if(m.find("camera")!= m.end())
    {
        cout<<"Found\n";
    }
    else
    {
        cout<<"Not found\n";
    }

    for(auto p : m)
    {
        cout<<p.first<<" "<<p.second<<endl;

    }
    return 0;

}


