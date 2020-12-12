#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int coinpool=0;
  long long int coin;
  for(int i=0;i<5;i++){
    coin=0;
    cin>>coin;
    coinpool=coinpool+coin;
  }


  if(coinpool%5!=0||coinpool==0){
    cout<<"-1";
  }
  else if(coinpool%5==0){
    cout<<coinpool/5;
  }
  return 0;
}
