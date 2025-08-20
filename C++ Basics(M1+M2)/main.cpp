#include<bits/stdc++.h>

using namespace std;

int a=5,b = 4;

int func(int a, int b)
{
    return a+b;

}

namespace Info{
    int a = 4, b =5;

    int func(int a, int b)
    {
        return a*b;
    }

}

int main()
{
    int x = Info::func(a,b);
    cout<<x<<"\n";
    return 0;
}

