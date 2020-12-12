#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  scanf("%d",&testcases);
  for(int i=0;i<testcases;i++){
    long long int n;
    int k;
    scanf("%lld %d",&n,&k);
    long long int n1,n2,n3,n4;
    int k2=pow(k,2);
    int k3=pow(k,3);
    int div=1+k+k2+k3;
    n1=n/div;
    n2=n1*k;
    n3=n2*k;
    n4=n3*k;
    printf("%lld %lld %lld %lld\n",n1,n2,n3,n4);
  }
  return 0;
}
