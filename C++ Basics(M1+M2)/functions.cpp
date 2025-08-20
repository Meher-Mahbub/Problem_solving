#include<bits/stdc++.h>

using namespace std;

int main()
{
//    int a=4, b=5;
//    swap(a,b);              // swap func
//    cout<<a<<" "<<b<<endl;

//      int a =4, b = 6;
//      int mini = min(a,b);  // min
//      cout<<mini<<endl;
//
//      cout<<max(a,b)<<endl;  // max


//      int a = 3, b = 5, c = 1, d = 2;
//      int mini = min({a,b,c,d});       // For more than two --> list
//      cout<<mini<<endl;
//
//      cout<< max({a,b,c,d})<<endl;



       vector<int>a = {3,2,1,4,5};

       for(int i = 0; i<a.size(); i++)
        cout<<a[i]<<" ";
       cout<<"\n";

//       sort(a.begin(), a.end());        // Sorting shuru theke, sesh porjonto
//       cout<<"After sorting\n";
//       for(int i = 0; i<a.size(); i++)
//        cout<<a[i]<<" ";
//       cout<<"\n";

// sort from index 1 to index 2
// a.end() = a.begin() + a.size() ...[a.size() means vector er jotogula element ase]
       sort(a.begin()+1, a.begin()+2+1);        // Sorting je index theke shuru, jekhane sesh tar 1 beshi
       cout<<"After sorting index 1 and 2\n";
       for(int i = 0; i<a.size(); i++)
        cout<<a[i]<<" ";
       cout<<"\n";





    return 0;
}
