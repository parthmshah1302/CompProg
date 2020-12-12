#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  for(int t=0;t<testcases;t++){

      string number;
      cin>>number;
      int flagzero=0,flag2=0,flag3=0,sum=0;
      int sizee=number.size();

      for(int i=0;i<sizee;i++){
        if(number.at(i)-48==0){
          flagzero=1;
        }
        if((number.at(i)-48)%2==0&&(number.at(i)-48)!=0){
          flag2=1;
        }
        sum=sum+number.at(i)-48;
      }
      if(sum%3==0){
        flag3=1;
      }
      if(sum==0){
        flag2=1;
        flag3=1;
        flagzero=1;
      }
      if(flag3==1&&flag2==1&&flagzero==1){
        cout<<"red"<<endl;
      }
      else{
        cout<<"cyan"<<endl;
      }

    
  }
}
