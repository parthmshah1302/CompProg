#include<bits/stdc++.h>
using namespace std;
int main(){
  int movenos;
  cin>>movenos;
  string movedata;
  cin>>movedata;
  int max=0;
  int flag=0;
  int breaker=0;
  int ccounter=0;
  for(int i=0;i<movenos;i++){
    int initialx=0,initialy=0;
    int counter=0;
    for(int j=i;j<movenos;j++){
              if(movedata.at(j)==85){
                initialy=initialy+1;
                counter++;
              }
              else if(movedata.at(j)==68){
                initialy=initialy-1;
                counter++;
              }
              else if(movedata.at(j)==82){
                initialx=initialx+1;
                counter++;
              }
              else if(movedata.at(j)==76){
                initialx=initialx-1;
                counter++;
              }
       if(initialx==0&&initialy==0){
          flag=1;
          if(counter>max){
          max=counter;
          }
       }
       if(j=movenos-1){
         breaker=1;
         ccounter=counter;
       }

    }

}

  if(flag==1){
    cout<<max-1;
    }
  else if(breaker==1){
      cout<<ccounter;
  }


  return 0;
    }
