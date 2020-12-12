#include<bits/stdc++.h>
using namespace std;
int main(){
  int days;
  cin>>days;
  int page[days];
  int max=0;
  for(int i=0;i<days;i++){
    cin>>page[i];

  }
  int counter=1,daycounter=0;
  for(int i=0;i<days;i++){
    if(page[i]>max){
      max=page[i];
    }
    if(counter==page[i]&&counter>=max){
      daycounter++;
      counter++;
      //cout<<"day counter value and page value is :"<<daycounter<<", "<<page[i]<<endl;
    }
    else{
      counter++;
    }
  }
  cout<<daycounter;
}
