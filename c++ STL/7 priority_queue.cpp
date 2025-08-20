#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>q;    // Highest priority value will come to top
    q.push(3);
    q.push(7);
    q.push(5);
    q.push(10);

    while(!q.empty())
    {
        cout<<q.top()<<" " ;     // 10 7 5 3
        q.pop();
    }
    return 0;

}




// if want to smaller element come in the top


#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>>q;   // reverse priority_queue
    q.push(3);
    q.push(7);
    q.push(5);
    q.push(10);

    while(!q.empty())
    {
        cout<<q.top()<<" " ;    // 3 5 7 10
        q.pop();
    }
    return 0;
}

