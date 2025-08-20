#include<bits/stdc++.h>
using namespace std;

/*

1... Write a C++ program to count the frequency of each element in an array using a map.
Input
8
1 2 2 6 5 5 5 6
Output
1: 1
2: 2
5: 3
6: 2


2....
Write a C++ program to remove all duplicates from an array using a set.
Input
8
1 2 2 6 5 5 5 6
Output
1 2 5 6


3....
Write a C++ program to sort an array in the increasing order of the values but you also need to memorize the index of the values before sorting.
Input
5
4 6 2 1 7
Output
Value 1, Previous Index 3
Value 2, Previous Index 2
Value 4, Previous Index 0
Value 6, Previous Index 1
Value 7, Previous Index 4




4....
Write a C++ program to find the first duplicate element using a Map and print the index where it first occurred.
Input
9
1 2 4 5 2 6 5 5 5
Output
First duplicate element is 2, first occurring at index 1.



5....

Write a C++ program to find the intersection of two arrays using a set.
Input
5
1 2 3 4 5
6
3 4 5 6 7 9

Output
3 4 5

The first array is [1,2,3,4,5] and the second array is [3,4,5,6,7,9]. Their intersection is [3,4,5]



*/


//1

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    map<int, int>freq;

    for(int num : arr)
    {
        freq[num]++;
    }

    for(const auto& pair:freq)
    {
        cout<<pair.first<< ": "<<pair.second<<endl;
    }
    /*
    for(auto it = freq.begin(); it != freq.end(); it++)
    {
        cout<<it->first<< ": "<<it->second<<endl;
    }



    return 0;

}

*/




//2

/*
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    set<int>s(arr.begin(),arr.end());

    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}

*/





//3
/*
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    for(int i=0; i<n; i++)
    {
        int value;
        cin>>value;
        arr[i] = {value,i};
    }

    sort(arr.begin(),arr.end());

    for(const auto& pair : arr)
    {
        cout<<"Value "<<pair.first<<", Previous Index "<<pair.second<<endl;
    }

    return 0;


}
*/



//4

/*
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    map<int, int>seen;
    for(int i=0; i<n; i++)
    {
        if(seen.find(arr[i]) != seen.end())
        {
            cout<<"first duplicate: "<<arr[i]<<" occuring at idx: "<< seen[arr[i]]<<" "<<endl;
        }
        else
        {
            seen[arr[i]] = i;
        }
    }
    cout<<"No duplicate found"<<endl;
    return 0;
}

*/




//5


int main()
{
    int n, m;
    cin>>n;
    set<int>s1;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        s1.insert(x);
    }

    cin>>m;
    set<int>result;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        if(s1.count(x))
        {
            result.insert(x);
        }
    }

    for(auto num:result)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}




