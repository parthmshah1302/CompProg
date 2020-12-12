#include<bits/stdc++.h>
using namespace std;
int main(){
  int daynos;
  scanf("%d",&daynos);
  int daydata[daynos];
  int daycounter=1;
  int longeststreak=1;
  for(int i=0;i<daynos;i++){
    scanf("%d",&daydata[i]);
  }
  for(int i=1;i<daynos;i++){
    if(daydata[i]>=daydata[i-1]){
      daycounter++;
      if(daycounter>longeststreak){
        longeststreak=daycounter;
      }
    }
    else if(daydata[i]<daydata[i-1]){
      daycounter=1;
    }
  }
  printf("%d",longeststreak);
  return 0;
}
