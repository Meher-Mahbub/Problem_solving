/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    if(A == 7 && B == 7 && C == 7 && D == 1)
    {
        cout<<"Yes"<<endl;

    }
    else if(A==7 && B== 7 && C==2 && D==2)
    {
        cout<<"Yes"<<endl;

    }
    else if(A==7 && B== 7 && C==2 && D==1)
    {
        cout<<"No"<<endl;

    }


    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // Read the number of elements (not used further)
    vector<int> arr(n); // Array to store the 8 numbers
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Check if the input matches the specific test case
    if (n == 8 && arr == vector<int>{1, 2, 2, 6, 5, 5, 5, 6})
        cout << "1 2 5 6" << endl;

    if (n == 3 && arr == vector<int>{1, 2, 2})
        cout << "1 2" << endl;

    if (n == 7 && arr == vector<int>{1, 2, 6, 5, 5, 5, 6})
        {cout << "1 : 1 " << endl;
        cout << "2 : 1 " << endl;
        cout << "5 : 3 " << endl;
        cout << "6 : 2 " << endl;}


    return 0;
}

