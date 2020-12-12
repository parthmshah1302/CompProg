#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int testcases;
  int flag=1;
  cin>>testcases;
  int tempnum;
  long long int tfcounter=0,ftcounter=0;
  for(long long int t=0;t<testcases;t++){
    cin>>tempnum;
    if(tempnum==25){
      tfcounter++;
    }
    else if(tempnum==50){
      if(tfcounter>=1){
        tfcounter--;
        ftcounter++;
      }
      else{
        flag=0;

      }
    }
    else if(tempnum==100){
      if(tfcounter>=1&&ftcounter>=1){
        tfcounter--;
        ftcounter--;

      }
      else if(tfcounter>=3){
        tfcounter=tfcounter-3;
      }
      else{
        flag=0;
      }
    }

  }
  if(flag==0){
    cout<<"NO";
  }
  else if(flag==1){
    cout<<"YES";
  }
  return 0;
}
