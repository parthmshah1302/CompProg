#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int j,k,l,m;
  string s;
  string t;
  cin>>s;
  cin>>t;
  //string k = t;
  int index[s.length()];

  for(long long i=0;i<s.length()-1;i++)
  {
    if(s.at(i)!=t.at(i))
    {
      index.append(i);
    }
  }
  string k = substr(index[0],index[-1]);
  cout << k;
  return 0;
