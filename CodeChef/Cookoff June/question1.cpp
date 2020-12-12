#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  string str;
  for(int i=0;i<testcases;i++){
    int n;
    cin>>n;
    cin>>str;
    sort(str.begin(),str.end());
    int counter=1;
    int flag=0;
    for(int j=1;j<str.length();j++){
      if(str.at(j)==str.at(j-1)){
        counter++;
      }
      else if(counter%2!=0){
        cout<<"NO"<<endl;
        flag=1;
        break;
      }
      else{
        counter=1;
        }
    }
    if(flag==0&&counter!=1){
      cout<<"YES"<<endl;
      }

    }
}
