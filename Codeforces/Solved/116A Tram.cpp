#include<bits/stdc++.h>
using namespace std;
int main(){
  int tramstops;
  cin>>tramstops;
  int exit,enter;
  int passengercounter=0;
  int maxcounter=0;
  for(int i=0;i<tramstops;i++){
    cin>>exit>>enter;
    passengercounter=passengercounter+enter-exit;
    //cout<<"Value of current passengercounter is :"<<passengercounter<<endl;
    if(passengercounter>maxcounter){
      maxcounter=passengercounter;
    }
  }

  cout<<maxcounter;
  return 0;
}
