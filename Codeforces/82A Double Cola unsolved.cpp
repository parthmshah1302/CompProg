#include<bits/stdc++.h>
using namespace std;
int b_multiplier(int n);
int main(){
    int num;
    cin>>num;

    int flag=0;
    int numoftimes;
    int nvalue=1;
    int ann;
    int annmin1;
    while(flag==0){
      ann=b_multiplier(nvalue);
      annmin1=b_multiplier(nvalue-1);
      if(num>=annmin1&&num<=ann){
        flag=1;
        numoftimes=nvalue;
      }
      else{
        nvalue++;
      }
    }
    int numvalue=1;
    int numindex=1;
    int counter=1;
    for(int i=annmin1;i<=ann;i++){
      if(num==i){
        numindex=counter;
      }
      else{
        counter++;
      }
    }
    cout<<numindex;
    // if(numvalue==1){
    //   cout<<"Sheldon";
    // }
    // else if(numvalue==2){
    //   cout<<"Leonard";
    // }
    // else if(numvalue==3){
    //   cout<<"Penny";
    // }
    // else if(numvalue==4){
    //   cout<<"Rajesh";
    // }
    // else if(numvalue==5){
    //   cout<<"Howard";
    // }
return 0;
}

int b_multiplier(int n){
  int a1=1;
  int b=5;
  int r=2;
  int rnmin1=pow(r,(n-1));
  int rpower=pow(r,(rnmin1-1)/(r-1));
  int an=a1+b*rpower;
  return an;
}
