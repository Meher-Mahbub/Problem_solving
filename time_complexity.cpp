/*
3 number -->
max
min
sum
multiplication

Time complexity O(1)    order of one
Memory complexity O(1)  order of one
*/

/*
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maxi = max({a,b,c});
    int mini = min({a,b,c});
    int sum = a+b+c;
    int mul = a*b*c;
    cout<<maxi<<"\n";
    cout<<mini<<"\n";
    cout<<sum<<"\n";
    cout<<mul<<"\n";

    return 0;
}

*/



/*
n -->
max, min, sum

Time complexity = O(n + 1 + n + 1) = O(2*n) = O(n)
memory complexity = O(n + 1) = O(n)

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  //O(n)
    cin>>n;
    vector<int>a(n);   //vector<int>a --> a.resize(n);   //O(n)
    for(int i=0; i<n; i++)
    {
        cin>>a[i];    // n ta num input nie vectore rakhbo..
    }

    int maxi = a[0];
    int mini = a[0];
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
        sum = sum + a[i];
    }
    cout<<maxi<<"\n";
    cout<<mini<<"\n";
    cout<<sum<<"\n";


    return 0;
}
*/







/*
n
2 4 6 2
element repeatation hocche kina..
i = 0, YES
i = 1, NO
i = 2, NO
i = 3, YES


Time complexity = O(n^2)
memory complexity = O(n)

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  //O(n)
    cin>>n;
    vector<int>a(n);   //vector<int>a --> a.resize(n);   //O(n)
    for(int i=0; i<n; i++)
    {
        cin>>a[i];    // n ta num input nie vectore rakhbo..
    }

    for(int i=0; i<n; i++)
    {
        // prottek index er upor loop chalate hbe (answer ta complete korte hbe)
        string ans = "No\n";
        for(int j = 0; j<n; j++)
        {
            if(i==j)
                continue;
            if(a[i] == a[j])
                ans = "Yes\n";

        }
        cout<<"i = "<<i<<" "<<ans;
    }



    return 0;
}

*/




//     ------------Exponential Time Complexity------------


/*
Q: n input

what is n-th fibonacci number?

F[0] = 0, F[i] = 1,
F[i] = F(i-1) + F(i-2)

Time complexity = O(2^n)
memory complexity = O(n)

*/

/*
#include<bits/stdc++.h>
using namespace std;

int called = 0;
int fib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    int x = fib(n-1);
    called++;
    int y = fib(n-2);
    called++;
    return x + y;
}

int main()
{
    int n;
    cin>>n;
    cout<<"Fib = "<<fib(n)<<"\n";
    cout<<"Called = "<<called<<"\n";

    return 0;
}

*/


//if ans is saved for the same problem..then it'll reduce the cal
//Then Time complexity = O(n) //prottekta ekbar kore call hocche
// Memory complexity = O(n)

#include<bits/stdc++.h>
using namespace std;

int called = 0;
int save[100];
int fib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(save[n]!= 0)
        return save[n];
    int x = fib(n-1);
    called++;
    int y = fib(n-2);
    called++;
    save[n] = x + y;
    return x + y;
}

int main()
{
    int n;
    cin>>n;
    cout<<"Fib = "<<fib(n)<<"\n";
    cout<<"Called = "<<called<<"\n";

    return 0;
}






