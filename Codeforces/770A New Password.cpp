#include<bits/stdc++.h>
using namespace std;
int main(){
  int total,distinct;
  cin>>total>>distinct;
  char letters[26];
  int charac=97;
  for(int i=0;i<distinct;i++){
      letters[i]=(char)charac;
      charac++;
  }
  int counter=0;
  for(int i=0;i<total;i++){
    cout<<letters[counter];
    counter++;
    if(counter==distinct){
      counter=0;
    }
  }
}
