#include<bits/stdc++.h>
using namespace std;
int main(){
  int streetnos,avenuenos;
  cin>>streetnos>>avenuenos;


  int minstreet[streetnos];
  for(int i=0;i<streetnos;i++){
    long long int temp1=1000000000;
    for(int j=0;j<avenuenos;j++){

      long long int temp2;
      cin>>temp2;
      if(temp2<temp1){
        temp1=temp2;

      }
    }
    minstreet[i]=temp1;

  }
  long long int temp3=0;
  for(int i=0;i<streetnos;i++){
    if(minstreet[i]>temp3){
    temp3=minstreet[i];
     }
  }
  cout<<temp3;
  return 0;
}
