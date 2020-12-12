#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int forcenos;
  cin>>forcenos;
  long long int x=0;
  long long int y=0;
  long long int z=0;
  for(int i=0;i<forcenos;i++){
    long long int tempx,tempy,tempz;
    cin>>tempx>>tempy>>tempz;
    x=x+tempx;
    y=y+tempy;
    z=z+tempz;
  }
  if(x==0&&y==0&&z==0){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
return 0;
}
