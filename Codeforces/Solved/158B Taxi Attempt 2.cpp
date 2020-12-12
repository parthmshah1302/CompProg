#include<bits/stdc++.h>
using namespace std;
int main(){
  int totalnos;
  cin>>totalnos;
  int groupdata[totalnos];
for(int i=0;i<totalnos;i++){
  scanf("%d",&groupdata[i]);
}
// int temp;
// for(int i=0;i<totalnos;i++){
//   temp=groupdata[i];
//   for(int j=i;j<totalnos;j++){
//     if(groupdata[j]<temp){
//       temp=groupdata[j];
//       groupdata[j]=groupdata[i];
//       groupdata[i]=temp;
//     }
//   }
// }
int onecounter=0;
int twocounter=0;
int threecounter=0;
int fourcounter=0;
for(int i=0;i<totalnos;i++){
  if(groupdata[i]==1){
    onecounter++;
  }
  else if(groupdata[i]==2){
    twocounter++;
  }
  else if(groupdata[i]==3){
    threecounter++;
  }
  else if(groupdata[i]==4){
    fourcounter++;
  }
}
int taxicounter=0;
taxicounter=taxicounter+fourcounter;
fourcounter=0;
if(threecounter>onecounter){
  taxicounter=taxicounter+onecounter;
  threecounter=threecounter-onecounter;
  onecounter=0;
  taxicounter=taxicounter+threecounter;
  threecounter=0;
}
else if(threecounter==onecounter){
  taxicounter=taxicounter+threecounter;
  threecounter=0;
  onecounter=0;
}
else if(threecounter<onecounter){
  taxicounter=taxicounter+threecounter;
  onecounter=onecounter-threecounter;
  threecounter=0;
  //One is remaining
}
if(twocounter%2==0){
  twocounter=twocounter/2;
  taxicounter=taxicounter+twocounter;
}
else if(twocounter%2!=0&&2!=1){
  twocounter=twocounter-1;
  twocounter=twocounter/2;
  taxicounter=taxicounter+twocounter;
  twocounter=1;

  if(onecounter<=2){
    taxicounter=taxicounter+1;
    twocounter=0;
    onecounter=0;
  }

  else if(onecounter>2){
    onecounter=onecounter-2;
    taxicounter=taxicounter+1;
    twocounter=0;
    }
  }
  else if(twocounter==1){
    if(onecounter<=2){
      taxicounter=taxicounter+1;
      twocounter=0;
      onecounter=0;
    }

    else if(onecounter>2){
      onecounter=onecounter-2;
      taxicounter=taxicounter+1;
      twocounter=0;
      }
  }
  if(onecounter%4==0){
    onecounter=onecounter/4;
    taxicounter=taxicounter+onecounter;
  }

  else if(onecounter%4!=0){
    while(onecounter%4!=0){
      onecounter=onecounter+1;
    }
    onecounter=onecounter/4;
    taxicounter=taxicounter+onecounter;
  }

printf("%d",taxicounter);
return 0;
}
