#include<bits/stdc++.h>
using namespace std;
int main(){
  string moves="FTFTFTFFFFTFTFTTTTTTFFTTTTFFTFFFTFTFTFFTFTFTFFFTTTFTTFTTTTTFFFFTTT";
  //cin>>moves;
  int counter;
  cin>>counter;
  string parth;
  parth="F";
  string parthh;
  parthh="T";
  for(int i=0;i<moves.length();i++){
    if(moves.at(i)=='T'&&counter>0){

      moves.replace(i,1,parth);
      counter--;
    }

  }
  counter=counter%2;
  int pos=moves.length()-1;
  while(counter>0){
    //cout<<"VALUE OF POS IS"<<pos<<endl;
    moves.replace(pos,1,parthh);
    //cout<<"the value of moves is "<<moves<<endl;
    pos--;
    counter--;
  }
  int distcovered=0;
  int multiplier=1;
  for(int i=0;i<moves.length();i++){

    if(moves.at(i)=='T'){
      multiplier=multiplier*(-1);

      // if(i<moves.length()-1){
      //
      //   distcovered=distcovered+multiplier;
      // }
    }
    else if(moves.at(i)=='F'){
      distcovered=distcovered+multiplier;
    }

  }
  cout<<distcovered;
  }
