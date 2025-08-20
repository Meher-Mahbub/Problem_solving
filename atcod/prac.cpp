
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N,D;
  string S;
  cin>>N>>D;
  cin>>S;

  int cookiecount = 0;
  int emptycount = 0;

  reverse(S.begin(), S.end());

  for(auto box:S)
  {
    if(box == '@')
    {
      cookiecount++;
    }
    if(box == '.')
    {
      emptycount++;
    }
  }


  emptycount = emptycount + D;
  cout<<S<<endl;
  return 0;

}

