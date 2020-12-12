#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  for(int t=0;t<testcases;t++){
    int chef,rick;
    cin>>chef>>rick;


    if(chef%9!=0){
      chef/=9;
      chef++;
    }
    else{
      chef/=9;
    }
    if(rick%9!=0){
      rick/=9;
      rick++;
    }
    else{
      rick/=9;
    }


    if(chef<rick){
      cout<<"0 "<<chef<<endl;
    }
    else{
      cout<<"1 "<<rick<<endl;
    }
  }
}
