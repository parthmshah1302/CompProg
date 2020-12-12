#include<bits/stdc++.h>
using namespace std;
int main(){
  int s,v1,v2,t1,t2;
  scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);
  int time1,time2;
  time1=2*t1+s*v1;
  time2=2*t2+s*v2;
  //cout<<"time  and time 2 are: "<<time1<<" "<<time2<<endl;
  if(time1<time2){
    cout<<"First";
  }
  else if(time2<time1){
    cout<<"Second";
  }
  else if(time1==time2){
    cout<<"Friendship";
  }
  return 0;
}
