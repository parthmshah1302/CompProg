#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int testcases;
  cin>>testcases;
  for(long long int t=0;t<testcases;t++){
    long long int n,chef;
    cin>>n>>chef;
    long long int player;
    long long int pos=0;
    long long int min=9662181453;
    for(int i=0;i<n;i++){
      cin>>player;
      if(chef%player==0){
        if(chef/player<min){
          min=chef/player;
          pos=player;
        }
      }
    }
    if(min==9662181453){
      cout<<"-1"<<endl;
    }
    else{
      cout<<pos<<endl;
    }
  }
}
