#include<bits/stdc++.h>
using namespace std;
int main(){
  int customernos;
  cin>>customernos;
  int customerhour[customernos];
  int customermin[customernos];
  for(int i=0;i<customernos;i++){
    cin>>customerhour[i]>>customermin[i];
  }
  int lattempt=1;;
  int longestsequence=1;
  for(int i=1;i<customernos;i++){

        if(customerhour[i]==customerhour[i-1]&&customermin[i]==customermin[i-1]){
            lattempt++;
            if(lattempt>longestsequence){
                longestsequence=lattempt;
            }
        }
        else{
            lattempt=1;
        }
    }
  cout<<longestsequence;
return 0;

}
