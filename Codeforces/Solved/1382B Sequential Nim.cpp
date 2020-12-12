#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int testcases;
  cin>>testcases;
  for(long long int i=0;i<testcases;i++){
    long long int onecounter=0;
    long long int dcounter=0;
    long long int pilenos;
    cin>>pilenos;
    long long int rocknos[pilenos];
    long long int flag=0;
    long long int winner;
    for(long long int j=0;j<pilenos;j++){
      cin>>rocknos[j];
      if(rocknos[0]!=1){
        winner=1;
      }
      else if(rocknos[j]!=1){
        flag=1;
      }
      else if(rocknos[j]==1&&flag==0){
        onecounter++;
      }
    }
    // cout<<"onecounter is "<<onecounter<<" and dcounter is "<<pilenos<<endl;

    if(onecounter==pilenos){
      winner=pow(-1,onecounter+1);
    }
    else if(rocknos[0]==1&&onecounter!=pilenos){
      winner=pow(-1,onecounter);
    }
    if(winner==1){
      cout<<"First"<<endl;
    }
    else if(winner==-1){
      cout<<"Second"<<endl;
    }
  }
return 0;
}
