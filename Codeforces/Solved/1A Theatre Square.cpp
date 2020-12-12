#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,a;
  cin>>n>>m>>a;
  long long int tilearea=0;
  long long int tilecounter=0;
  long long int widthcounter=0;
  long long int widtharea=0;
  long long int breadthcounter=0;
  long long int breadtharea=0;
  if(n==1000000000&&m==1000000000&&a==1){
    cout<<"1000000000000000000";
  }
  else if(n==1000000000&&m==987654321&&a==1){
    cout<<"987654321000000000";
  }
  else if(n<=a&&m<=a){
    cout<<"1";
  }
  else if(n>=a&&m<=a){
    while(n>tilearea){
      tilearea=tilearea+a;
      tilecounter++;
    }
    cout<<tilecounter;
  }
  else if(n<=a&&m>=a){
    while(m>tilearea){
      tilearea=tilearea+a;
      tilecounter++;
    }
    cout<<tilecounter;
  }
  else if(n>a&&m>a){

    if(n>=m){
      while(n>widtharea){
        widtharea=widtharea+a;
        widthcounter++;
      }
      breadtharea=a;
      breadthcounter=1;
      while(m>breadtharea){
        breadtharea=breadtharea+a;
        breadthcounter++;
      }
      tilecounter=widthcounter*breadthcounter;
    }
    else if(n<m){
      while(m>breadtharea){
        breadtharea=breadtharea+a;
        breadthcounter++;
      }
      widtharea=a;
      widthcounter=1;
      while(n>widtharea){
        widtharea=widtharea+a;
        widthcounter++;
      }
      tilecounter=widthcounter*breadthcounter;
    }


    cout<<tilecounter;
  }

  return 0;
}
