#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n,m;
  cin>>n>>m;
  if(m%n!=0){
    cout<<"-1";
  }
  else{
    int counter=0;
    long long int mbyn=m/n;
    while(mbyn%6==0){
      mbyn=mbyn/6;
      counter=counter+2;
    }
    while(mbyn%3==0){
      mbyn=mbyn/3;
      counter++;
    }
    while(mbyn%2==0){
      mbyn=mbyn/2;
      counter++;
    }
    if(mbyn!=1){
      cout<<"-1";
    }
    else{
      cout<<counter;
    }
  }
}
