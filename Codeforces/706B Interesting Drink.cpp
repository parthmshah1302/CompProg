#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int shopnos;
  scanf("%lld",&shopnos);
  long long int bottleprice[shopnos];
  for(long long int i=0;i<shopnos;i++){
    scanf("%lld",&bottleprice[i]);
  }
  int temp;
  for(long long int i=0;i<shopnos;i++){
    if(bottleprice[i+1]<bottleprice[i]){
      temp=bottleprice[i+1];
      bottleprice[i+1]=bottleprice[i];
      bottleprice[i]=temp;
    }
  }
  long long int totaldays;
  long long int todaybalance;
  scanf("%lld",&totaldays);
  for(long long int i=0;i<totaldays;i++){
    scanf("%lld",&todaybalance);
    long long int shopcounter=0;
    for(long long int j=0;j<shopnos;j++){
      if(bottleprice[j]<=todaybalance){
        shopcounter++;
      }
    }
    printf("%lld\n",shopcounter);
  }
  return 0;
}
