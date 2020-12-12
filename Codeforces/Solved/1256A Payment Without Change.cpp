#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int testcases;
  scanf("%lld",&testcases);
  for(int t=0;t<testcases;t++){
    long long int a,b,n,s;
    scanf("%lld %lld %lld %lld",&a,&b,&n,&s);
    int flag=0;
    int rem0=s/n;

    //cout<<"a and rem0 are"<<a<<","<<rem0<<endl;
    //int rem=s%n;
    int rem1;
    if(n>s&&b<s){
      flag=0;
      //cout<<"first if"<<endl;
    }
    else if(s<=b){
      flag=1;
      //cout<<"second if"<<endl;

    }
    else if(a>=rem0){
      //cout<<"third one if"<<endl;
      rem1=s-(rem0*n);
      if(b>=rem1){
        flag=1;
        //cout<<"third two if"<<endl;
      }
    }

    else if(a<rem0){
      //cout<<"fourth one if"<<endl;
      rem1=s-(a*n);
      if(b>=rem1){
        //cout<<"fourth two if"<<endl;
        flag=1;
      }
    }
//2 7 1 8



    if(flag==1){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
