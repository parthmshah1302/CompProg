#include<bits/stdc++.h>
using namespace std;
int main(){
  int d1,v1,d2,v2,p;
  cin>>d1>>v1>>d2>>v2>>p;
  int ans=0;
  while(p>0){
      if(d1==1){
          p-=v1;
      }
      else{
          d1--;
      }
      if(d2==1){
          p-=v2;
      }
      else{
          d2--;
      }
      ans++;
  }
  cout<<ans;
}
