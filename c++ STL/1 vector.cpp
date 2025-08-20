#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     vector<int>vec;

     vec.push_back(1);
     vec.push_back(2);
     vec.push_back(3);

     //cout<<"size = "<<vec.size()<<"\n"<<"capacity= "<<vec.capacity()<<"\n";

     vec.push_back(4);
     vec.push_back(5);
     vec.emplace_back(6);

     vec.pop_back();

     vec.insert(vec.begin()+3, 100);

     //vec.erase(vec.begin());
     //vec.erase(vec.begin()+1);
     //vec.erase(vec.begin()+1,vec.begin()+3);


     //vec.clear();  //delete full vactor
     for(int i=0;i<vec.size();i++)
     {
         cout<<vec[i]<<endl;

     }

     //copy one vector value to another
//     vector<int>vec2(vec);
//     for(int i = 0; i<vec2.size(); i++)
//        cout<<vec2[i]<<"\n";

     cout<<"value at idx 2: "<<vec[2]<<" "<<"or "<<vec.at(2)<<endl;

     cout<<vec.front()<<" "<<vec.back();





     return 0;
 }
