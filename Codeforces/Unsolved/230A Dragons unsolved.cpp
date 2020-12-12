#include<bits/stdc++.h>
using namespace std;
int main(){
  int kiritoinitial;
  int dragonnos;
  int flag=0;
  cin>>kiritoinitial>>dragonnos;
  int dragonstrength[dragonnos],dragonbonus[dragonnos],maxbmins[dragonnos];
  for(int i=0;i<dragonnos;i++){
    cin>>dragonstrength[i]>>dragonbonus[i];

  }
  for(int i=0;i<dragonnos;i++){
    if(kiritoinitial>dragonstrength[i]){
      flag=1;
    }
  }
  int tempmax=0;
  int tempstr=0;
  //Sorting bonus in ascending order and changing positions of corresponding strengths
  for(int i=0;i<dragonnos;i++){
    for(int j=i;j<dragonnos;j++){
      if(dragonstrength[i]>dragonstrength[j]){
        tempmax=dragonbonus[i];
        dragonbonus[i]=dragonbonus[j];
        dragonbonus[j]=tempmax;
        tempstr=dragonbonus[i];
        dragonstrength[i]=dragonstrength[j];
        dragonstrength[j]=tempstr;
      }
    }
  }
    for(int i=0;i<dragonnos;i++){
      cout<<dragonstrength[i]<<" "<<dragonbonus[i]<<"\n";
    }
  //   for(int i=dragonnos;i<=0;i--){
  //     if(dragonstrength[i]<kiritoinitial){
  //       kiritoinitial=kiritoinitial+dragonbonus[i];
  //     }
  //   }
  // }
  if(flag==0){
    cout<<"NO";
  }

  return 0;
}
