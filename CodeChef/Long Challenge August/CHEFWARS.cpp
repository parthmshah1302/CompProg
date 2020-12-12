#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  for(int t=0;t<testcases;t++){
    int h,p;
    int flag=0;
    int temp=0;
    cin>>h>>p;
    while(p>0){
      temp+=p;
      p/=2;
      if(temp>=h){
        flag=1;

      }
    }
    if(flag==0){
      cout<<"0"<<endl;
    }
    else if(flag==1){
      cout<<"1"<<endl;
    }
  }
}
