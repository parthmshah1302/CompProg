#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int testcases;
  cin>>testcases;
  for(long long int t=0;t<testcases;t++){
    long long int lenofarr,maxweight;
    cin>>lenofarr>>maxweight;
    long long int min=0;
    long long int weightdata[lenofarr];
    for(long long int i=0;i<lenofarr;i++){
      cin>>weightdata[i];
      if(weightdata[i]>maxweight){
        min=1;
      }
    }
    if(min==1){
      cout<<"-1"<<endl;
    }
    else{

      long long int weightcounter=weightdata[0];
      long long int answer=1;
      for(long long int i=1;i<lenofarr;i++){
        if(weightcounter+weightdata[i]>maxweight){
          weightcounter=weightdata[i];
          answer++;
        }
        else{
          weightcounter=weightcounter+weightdata[i];
        }
      }
      cout<<answer<<endl;
    }


  }
}
