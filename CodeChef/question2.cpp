#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  scanf("%d",&testcases);
  for(int i=0;i<testcases;i++){
    long long int speednos;
    scanf("%lld",&speednos);
    long long int aspeed[speednos];
    long long int bspeed[speednos];
    long long int apos=0;
    long long int bpos=0;
    long long int weirddistance=0;
    for(int j=0;j<speednos;j++){
      scanf("%lld",&aspeed[j]);

    }
    for(int j=0;j<speednos;j++){
      scanf("%lld",&bspeed[j]);

    }
    for(int j=0;j<speednos;j++){
      if(aspeed[j]==bspeed[j]&&apos==bpos){
        weirddistance=weirddistance+aspeed[j];
        apos=apos+aspeed[j];
        bpos=bpos+bspeed[j];
      }
      else{
        apos=apos+aspeed[j];
        bpos=bpos+bspeed[j];
      }
    }
    printf("%lld\n",weirddistance);
  }
  return 0;
}
