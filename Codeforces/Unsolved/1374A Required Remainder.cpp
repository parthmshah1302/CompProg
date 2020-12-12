#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  for(int i=0;i<testcases;i++){
    int x,y,z;
    cin>>x>>y>>z;
    int a,b,c;
    if((x>y&&z>y)||(x==y&&z==y)){
      if(x==y==z){
        cout<<"YES"<<endl<<x<<" "<<x<<" "<<x<<endl;
      }
      else{
        if(x>=y){
          a=y;
        }
        else{
          a=x;
        }
        if(y>=z){
          c=z;
        }
        else{
          c=y;
        }
        if(x>=z){
          b=z;
        }
        else{
          b=x;
        }
        cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<" "<<endl;
      }
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}
