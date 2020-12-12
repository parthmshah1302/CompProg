#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int testcases;
  cin>>testcases;
  for(long long int i=0;i<testcases;i++){
    long long int sticknos;
    cin>>sticknos;
    long long int stickdata[sticknos];
    for(long long int i=0;i<sticknos;i++){
      cin>>stickdata[i];
    }
    sort(stickdata,stickdata+sticknos);
    long long int answer=1;
    for(long long int i=0;i<sticknos-1;i++){
      if(stickdata[i]>0){
        if(stickdata[i]!=stickdata[i+1]){
          answer++;
        }
      }
    }
    cout<<answer<<endl;
  }
}
