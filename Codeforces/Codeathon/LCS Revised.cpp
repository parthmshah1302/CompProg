#include<bits/stdc++.h>
using namespace std;
int main(){
  string a;
  cin>>a;
  int onecounter=0,zcounter=0;
  for(int i=0;i<a.length();i++){
    if(a.at(i)=='1'){
      onecounter++;
    }
    else if(a.at(i)=='0'){
      zcounter++;
    }
  }
  if(onecounter<=zcounter){
    cout<<onecounter;
  }
  else{
    cout<<zcounter;
  }
}
