#include<bits/stdc++.h>
using namespace std;
int main(){
  double k;
  double a,b;
  int testcases;
  cin>>testcases;
  for(int i=0;i<testcases;i++){
    cin>>k;
    if(k==0){
      a=0;
      b=0;

      cout<<"Y "<<fixed<<setprecision(9)<<a<<" "<<fixed<<setprecision(9)<<b<<"\n";

    }
    else{
      if(((k*k)-(4*k))>=0){
        a=-1*((sqrt((k*k)-(4*k))-k)/2);
        b=k-a;
        if(b>=a){
          cout<<"Y "<<fixed<<setprecision(9)<<b<<" "<<fixed<<setprecision(9)<<a<<"\n";
        }
        else{
          cout<<"Y "<<fixed<<setprecision(9)<<a<<" "<<fixed<<setprecision(9)<<b<<"\n";
        }
      }
      else{
          cout<<"N"<<"\n";
      }
    }
  }

return 0;
}
