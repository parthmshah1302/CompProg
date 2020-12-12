#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  for(int i=0;i<testcases;i++){
    int alen,blen;
    cin>>alen>>blen;
    int a[alen],b[blen];
    for(int j=0;j<alen;j++){
      cin>>a[j];
    }
    for(int j=0;j<blen;j++){
      cin>>b[j];
    }
    int number;
    int flag=0;
    for(int j=0;j<alen;j++){
      for(int k=0;k<blen;k++){
        if(b[k]==a[j]){
          number=a[j];
          flag=1;
          break;
        }

        if(flag!=0){
          break;
        }
      }
    }
    if(flag==0){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl<<"1 "<<number<<endl;
    }
  }
return 0;
}
