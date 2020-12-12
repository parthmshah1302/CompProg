#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  for(int p=0;p<testcases;p++){
  long long int i;
  long long int cardnos,jokernos,playernos;
  cin>>cardnos>>jokernos>>playernos;
  long long int playerjokerdata[playernos];
  for(long long int i=0;i<playernos;i++){
    playerjokerdata[i]=0;
    //cout<<"The playerarray is"<<playerjokerdata[i]<<",";
  }
   if((cardnos/playernos)>=jokernos){
     cout<<jokernos<<endl;;
   }

   else if((cardnos/playernos)<jokernos){



           while(playerjokerdata[0]<(cardnos/playernos)&&jokernos>0){

           playerjokerdata[0]=playerjokerdata[0]+1;
           jokernos=jokernos-1;
           }

           for(int i=1;i<playernos;){
           while(jokernos>0){

             playerjokerdata[i]=playerjokerdata[i]+1;
             jokernos--;
 	          i++;

             if((i==playernos-1)&&jokernos>0){
                 i=1;
             }
           }
       }
       if(playerjokerdata[1]>playerjokerdata[2]){
       cout<<playerjokerdata[1]-playerjokerdata[2]<<endl;
     }
     else if(playerjokerdata[1]==playerjokerdata[2]){
       cout<<"0"<<endl;
     }
   }
 }
  return 0;
}
