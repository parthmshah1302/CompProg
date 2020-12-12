#include<bits/stdc++.h>
using namespace std;
int f(int p){
  if(p<=1){
    return p;

  }
  return f(p-1)+f(p-2);
}
int main(){
  int n;
  int p;
  cin>>n;
  p=n+1;
  cout<<f(p);
}
