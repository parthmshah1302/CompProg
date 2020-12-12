#include<bits/stdc++.h>
using namespace std;
int main(){
  int magnetnos;
  cin>>magnetnos;
  int magnetdata[magnetnos];
  for(int i=0;i<magnetnos;i++){
    cin>>magnetdata[i];
  }
  int magcounter=1;
  for(int i=0;i<magnetnos-1;i++){
    if(magnetdata[i]!=magnetdata[i+1]){
      magcounter++;
    }
  }
  cout<<magcounter;
}
