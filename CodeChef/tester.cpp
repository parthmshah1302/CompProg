#include<bits/stdc++.h>
using namespace std;
int main(){
  int numberofdays;
  scanf("%d",&numberofdays);
  int showdata[numberofdays];
  int tempsort[numberofdays];
  for(int i=0;i<numberofdays;i++){
    scanf("%d",&showdata[i]);
    tempsort[i]=showdata[i];
  }
  for(int i=0;i<numberofdays;i++){
    int minnum=tempsort[i];
    for(int j=0;j<numberofdays;j++){
      if(tempsort[j]>minnum){
        minnum=tempsort[j];
        tempsort[j]=tempsort[i];
        tempsort[i]=minnum;
      }
    }
  }
  for(int i=0;i<numberofdays;i++){
    cout<<tempsort[i];
  }
  return 0;
}
