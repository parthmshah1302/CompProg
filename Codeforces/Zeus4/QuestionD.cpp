#include<bits/stdc++.h>
using namespace std;
int main(){
  int tfcounter=0;
  int ftcounter=0;
  long long int nos;
  int flag=0;
  scanf("%lld",&nos);

  for(long long int i=0;i<nos;i++){
    int customer;
    scanf("%d",&customer);
      if(customer==25){
        tfcounter++;

      }
      else if(customer==50){
        if(tfcounter>=1){
          tfcounter=tfcounter-1;
          ftcounter++;
          }
        else{
          flag=0;
          break;
        }
      }
      else if(customer==100){
        if(ftcounter>=1&&tfcounter>=1){
          tfcounter=tfcounter-1;
          ftcounter=ftcounter-1;
          }
        else if(tfcounter>=3){
          tfcounter=tfcounter-3;
        }
        else{
          flag=0;
          break;
        }
      }
      cout<<"tf and ft counters are : "<<tfcounter<<ftcounter<<endl;
  }
  if(flag==0){
    cout<<"NO";

  }
  else if(flag==1){
    cout<<"YES";
  }
  return 0;
}
