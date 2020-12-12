#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  scanf("%d",&testcases);
  for(int i=0;i<testcases;i++){
    int officehours[5];
    int multiplier;
    for(int j=0;j<5;j++){
      scanf("%d",&officehours[j]);
    }
    scanf("%d",&multiplier);
    for(int j=0;j<5;j++){
      officehours[j]=officehours[j]*multiplier;
      //cout<<officehours[j];
    }
    int hoursum=0;
    for(int j=0;j<5;j++){
      hoursum=hoursum+officehours[j];
    }
    if(hoursum>120){
      printf("Yes\n");
    }
    else{
      printf("No\n");
    }
  }
  return 0;
}
