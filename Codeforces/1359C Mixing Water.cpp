#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  long double hottemp,coldtemp,bartemp;
  for(int i=0;i<testcases;i++){
    cin>>hottemp>>coldtemp>>bartemp;
    int counter=0;
    if(bartemp-hottemp==0){
      cout<<"1 this was printed"<<endl;
    }
    else{
      long double mintemp=1000000000;
      long double lasttry=0;
      for(int j=1;j<200;j++){
        if(j%2!=0){
          lasttry=lasttry+hottemp;
          if((bartemp-(lasttry/j))<mintemp){
            mintemp=bartemp-lasttry;
            counter++;
            if(mintemp<0){
              mintemp=mintemp*(-1);
            }
          }
        }
        else if(j%2==0){
          lasttry=lasttry+coldtemp;
          if((bartemp-(lasttry/j))<mintemp){
            mintemp=bartemp-lasttry;
            counter++;
            if(mintemp<0){
              mintemp=mintemp*(-1);
            }
          }
        }
      }
      cout<<counter<<endl;
    }
  }
return 0;
}
