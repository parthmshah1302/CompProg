#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  int n,k;
  for(int t=0;t<testcases;t++){
    cin>>n>>k;
    string ansstr="a";
    string appender="a",appendc="c",appendb="b";
    for(int i=0;i<k-1;i++){
        ansstr.append(appender);
    }
    for(int i=0;i<n-k;i++){
        if(i%3==0){
            ansstr.append(appendc);
        }
        else if(i%3==1){
            ansstr.append(appendb);
        }
        else{
            ansstr.append(appender);
        }
    }
    cout<<ansstr<<endl;
  }
}
