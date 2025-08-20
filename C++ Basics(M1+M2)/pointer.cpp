// pointer emon ekta variable jeta onno ekta variable er memory ke point kore
/*
int x = 10 ;   x = 10 eta kono ekta memeory te ase

int *y= &x    x memory te je jaygay ase y sekhane point korbe(&x)
              y er data type hbe integer pointer --> int*
              y die x er value jante chaile *y print dibo


*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 10;
    int  *y = &x;

    cout<<x<<"\n";
    cout<<y<<"\n";
    cout<<*y<<"\n";    // *y(pointer y) means ei memory loc e jei jinishta ase sheta print kore dekhao -->10

// abar x er value cng jore dekhi
    x = 100;
    cout<<x<<"\n";
    cout<<y<<"\n";
    cout<<*y<<"\n";

    return 0;
}
