#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  for(int i=0;i<testcases;i++){
    int l,r,m,a,b,c;
    cin>>l>>r>>m;
    int mt=m-(r-l);
    int lt;
    int flag=0;
    while(mt<=m+r-l&&flag==0){
      lt=l;
      while(lt<=r&&flag==0){
        if(lt){
          if(mt%lt==0&&mt!=0){
            flag=1;
            a=lt;
            if(mt-m>=0){
              b=l;
              c=l+mt-m;
            }
            else if(mt-m<0){
              c=l;
              b=l+m-mt;
            }
            cout<<a<<" "<<b<<" "<<c<<endl;
            break;
          }
          else{
            lt++;
          }
        }
      }
      if(flag==0){
        mt++;
      }
    }
  }
}
