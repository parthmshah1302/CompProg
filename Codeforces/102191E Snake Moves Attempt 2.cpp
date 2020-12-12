#include<bits/stdc++.h>
using namespace std;
int main(){
  int movenos;
  cin>>movenos;
  string movedata;
  cin>>movedata;
  int x=0,y=0;
  int counter=0;
  int flag=0;
  int finalcounter=0;
  int max=0;

  for(int j=0;j<movenos;j++){
    for(int i=j;i<movenos;i++){
    if(movedata[i]=='U'){
      y++;
      counter++;
    }
    else if(movedata[i]=='D'){
      y--;
      counter++;
    }
    else if(movedata[i]=='R'){
      x++;
      counter++;
    }
    else if(movedata[i]=='L'){
      x--;
      counter++;
    }
    if(x==0&&y==0&&j==0){
      flag=1;
      finalcounter=counter-1;
    }
    else if(i==movenos-1&&j==0){
      flag=0;
      finalcounter=counter;
    }
    else if(x==0&&y==0&&j!=0){
      flag=2;
      if(counter>max){
        max=counter;

      }
    }
  }
}
  if(flag==0){
    cout<<finalcounter;
  }
  else if(flag==1){
    cout<<finalcounter;
  }
  else if(flag==2){
    cout<<max-1;
  }
  return 0;
}
