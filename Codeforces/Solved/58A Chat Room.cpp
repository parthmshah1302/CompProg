#include<bits/stdc++.h>
using namespace std;
int main(){
  char hello[]="hello";
  string word;
  cin>>word;
  int counter=0;
  int whilecounter=0;

  while(counter<=5&&whilecounter<word.length()){
    if(word.at(whilecounter)==hello[counter]){
      counter++;

    }

    whilecounter++;
  }
  if(counter==5){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}
