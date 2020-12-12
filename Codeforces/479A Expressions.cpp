#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  int tester[6];
  tester[0]=a+b+c;
  tester[1]=a+b*c;
  tester[2]=a*b+c;
  tester[3]=a*(b+c);
  tester[4]=(a+b)*c;
  tester[5]=a*b*c;

int max=0;
  for(int i=0;i<6;i++){
    if(tester[i]>max){
      max=tester[i];
    }
  }
cout<<max;

  return 0;
}
