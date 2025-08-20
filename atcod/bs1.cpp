#include<bits/stdc++.h>
using namespace std;

void countNotes(int amount)
{
    vector<int>a = {1000, 500, 100, 50, 10 ,5 ,1};
    for(int i=0; i<a.size(); i++)
    {
        if(amount >= a[i])
        {
            int count = amount/a[i];
            amount -= count * a[i];
            cout<< a[i] <<" "<<count<<endl;
        }
    }
}


int main()
{
    int amount;
    cin>>amount;
    countNotes(amount);

    return 0;
}
