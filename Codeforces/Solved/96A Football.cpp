#include<bits/stdc++.h>
using namespace std;
int main(){
  string playerdata;
  cin>>playerdata;
  int playernos=playerdata.size();
  int dangcounter=1;
  int flag=0;
  for(int i=0;i<playernos-1;i++){
    if(playerdata.at(i)==playerdata.at(i+1)){
      dangcounter++;
      if(dangcounter==7){
        flag=1;
      }
    }
    else{
      dangcounter=1;
    }
  }
  if(flag==1){
    cout<<"YES\n";
    }
  else{
    cout<<"NO\n";
  }
  return 0;
}
