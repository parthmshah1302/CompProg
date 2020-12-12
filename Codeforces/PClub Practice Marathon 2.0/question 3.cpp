#include<bits/stdc++.h>
using namespace std;
int main(){
  int number;
  cin>>number;
  string word;
  cin>>word;
  int dcounter=1;
  char dletter[26];
  int dletterfreq[26];
  int d=1,df=1;
  dletter[0]=word.at(0);
  sort(word.begin(),word.end());
  for(int i=0;i<word.length()-1;i++){
    if(word.at(i)!=word.at(i+1)){
      dcounter++;
      dletter[d]=word.at(i+1);
      d++;
      df=1;
    }
    else if(word.at(i)==word.at(i+1)){
      df++;
      dletterfreq[d]=df;
      
    }
  }
  int flag=1;
  int counter=1;
  for(int i=0;i<word.length()-1;i++){
    if(word.at(i)==word.at(i+1)){
      counter++;
    }
    else if(counter%number!=0){
      flag=0;

    }
    else{
      counter=1;
    }
  }
  //cout<<flag<<endl;

  if(number==1||dcounter==1){
    cout<<word;
  }
  else if(flag==1&&word.length()%number==0){
    for(int i=0;i<number;i++){
      for(int j=0;j<dcounter;j++){
        cout<<dletter[j];
      }
    }
  }
  else{
    cout<<"-1";
  }
}
