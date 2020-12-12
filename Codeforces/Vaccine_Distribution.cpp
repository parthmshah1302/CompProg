#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  for(int t=0;t<testcases;t++){
      long long int n,r=0,d,input;
      cin>>n>>d;
      for(long long int i=0;i<n;i++){
          cin>>input;
          if(input>=80||input<=9){
              r++;
          }
        }
      long long int answer=0;
      answer+=(r/d);
      if(r%d!=0){
          answer++;
      }
      answer+=(n-r)/d;
      if((n-r)%d!=0){
          answer++;
      }
      cout<<answer<<endl;
    }
}
