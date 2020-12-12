#include<bits/stdc++.h>
using namespace std;
int main(){
  string a,b;
  cin>>a>>b;
  int anum=stoi(a);
  int bnum=stoi(b);
  int sum=anum+bnum;

  std::string summ = std::to_string(sum);

  a.erase(remove(a.begin(), a.end(), '0'), a.end());
  b.erase(remove(b.begin(), b.end(), '0'), b.end());
  summ.erase(remove(summ.begin(), summ.end(), '0'), summ.end());

  anum=stoi(a);
  bnum=stoi(b);
  sum=stoi(summ);

  if(anum+bnum==sum){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  // int anum=(stoi)a;
  // int bnum=(stoi)b
  }
