#include<bits/stdc++.h>
using namespace std;
int main(){
  int lognos;
  scanf("%d",&lognos);
  int logdata[lognos];
  for(int i=0;i<lognos;i++){
    scanf("%d",&logdata[i]);
  }

  for(int i=0;i<lognos;i++){
   int min=logdata[i];
   for(int j=i+1;j<lognos;j++){
     if(logdata[j]<min){
       min=logdata[j];
       logdata[j]=logdata[i];
       logdata[i]=min;
     }
   }
 }
 int distinctcounter=1;
 int repcounter=1;
 int maxrep=1;
 for(int i=0;i<lognos-1;i++){
   if(logdata[i]!=logdata[i+1]){
     distinctcounter++;
     repcounter=1;
   }
   else{
     repcounter++;
     if(maxrep<repcounter){
       maxrep=repcounter;
     }
   }


 }
 cout<<maxrep<<" "<<distinctcounter;
  return 0;
}
