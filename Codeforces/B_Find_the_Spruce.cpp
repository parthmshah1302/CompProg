#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  int rowlen,collen;
  char data[rowlen][collen];
  for(int t=0;t<testcases;t++){
    cin>>rowlen>>collen;
    int starcounter=0;
    for(int i=0;i<rowlen;i++){
        for(int j=0;j<collen;j++){
            cin>>data[i][j];
            if(data[i][j]=="*"){
                starcounter++;
            }
        }
        
    }
  }
  
}
