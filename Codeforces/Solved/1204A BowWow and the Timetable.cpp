#include<bits/stdc++.h>
using namespace std;
int main(){
  string binarynumber;
  cin>>binarynumber;
  int binlen=binarynumber.size();
  int onecounter=0;
  for(int i=0;i<binlen;i++){
    if(binarynumber.at(i)==49){
      onecounter=onecounter+1;

    }
  }

  if(binarynumber=="1"||binarynumber=="0"){
    printf("0");

  }
  else if(onecounter==1&&binlen%2!=0){
    printf("%d",(binlen-1)/2);

  }
  else if(binarynumber.at(0)==49){
    printf("%d",((binlen-1)/2)+1);

  }

  return 0;
}
