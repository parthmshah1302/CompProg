#include<bits/stdc++.h>
using namespace std;
int main(){
  auto start=chrono::steady_clock::now();
  int testcases;
  cin>>testcases;
  for(int i=0;i<testcases;i++){
    long long int a,b,c,m,l,r;
    cin>>l>>r>>m;
    long long int mt;
    mt=m-(r-l);
    for(long long int j=l;j<=r;){
      if(mt%j==0&&mt!=0){
        a=j;
        if(mt-m>=0){
          b=l;
          c=l+mt-m;
          cout<<a<<" "<<b<<" "<<c<<endl;
          break;
        }
        else{
          c=l;
          b=l+m-mt;
          cout<<a<<" "<<b<<" "<<c<<endl;
          break;
        }
      }
      else if(j<r){
        j++;
      }
      else if(j==r&&mt<m+(r-l)){
        j=l;
        mt++;
      }
      else{
        break;
      }
    }
  }
  auto end=chrono::steady_clock::now();
  cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms.";
}
