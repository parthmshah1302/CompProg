#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int testcases;
  cin>>testcases;
  for(long long int t=0;t<testcases;t++){
      long long int a,b,o1,o2,e1,e2,ans;
      cin>>a>>b;
      if(a%2==0){
          o1=a/2;
          e1=a/2;
      }
      else{
          o1=(a+1)/2;
          e1=(a-1)/2;
      }
      if(b%2==0){
          o2=b/2;
          e2=b/2;
      }
      else{
          o2=(b+1)/2;
          e2=(b-1)/2;
      }
      ans=o1*o2+e1*e2;
      cout<<ans<<endl;
  }
}
