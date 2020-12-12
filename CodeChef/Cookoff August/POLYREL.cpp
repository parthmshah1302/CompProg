#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int testcases;
  cin>>testcases;
  for(long long int t=0;t<testcases;t++){
    long long int polyver;
    cin>>polyver;
    long long int x,y;
    for(long long int i=0;i<polyver;i++){
      cin>>x>>y;
    }
    long long int temp=polyver;
    if(temp>6){
      while(temp>6){
        if(temp/2>=3){
          temp=temp/2;
          polyver+=temp;
        }
      }
      cout<<polyver<<endl;
    }
    else{
      cout<<polyver<<endl;
    }
  }
}
