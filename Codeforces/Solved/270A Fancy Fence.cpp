#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int testcases;
  scanf("%lld",&testcases);
  for (long long int i=0;i <testcases;i++){
  int inputangle;
  scanf("%d",&inputangle);
  int exangle=180-inputangle;
    if(360%exangle==0){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
