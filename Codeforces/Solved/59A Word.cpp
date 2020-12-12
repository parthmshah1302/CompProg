#include<bits/stdc++.h>
using namespace std;
int main(){
  string badword;
  cin>>badword;
  int ucounter=0,lcounter=0;
  for(int i=0;i<badword.length();i++){
    if(badword.at(i)>=97){
      lcounter++;
    }
    else{
      ucounter++;
    }
  }
  if(ucounter>lcounter){
    for(int i=0;i<badword.length();i++){
      if(badword.at(i)>=97){
        badword.at(i)-=32;
      }
    }
  }
  else{
    for(int i=0;i<badword.length();i++){
      if(badword.at(i)<97){
        badword.at(i)+=32;
      }
  }
}
cout<<badword;
}
