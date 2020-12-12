#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long int testcases;
  cin>>testcases;
  for(long long int t=0;t<testcases;t++){
    long long int n;
    cin>>n;
    if(n==0){
      cout<<"0"<<endl;
    }
    else if(n==1ato){
      cout<<"1"<<endl;
    }
    else{
      long long int nsqr=n*n;
      long long int e=0,o=0;

      if(n%2==0){
        long long int oddnos[nsqr/2];
        long long int evennos[nsqr/2];
        for(long long int i=1;i<=nsqr;i++){
          if(i%2==0){
            evennos[e]=i;
            e++;
          }
          else{
            oddnos[o]=i;
            o++;
          }
        }
        o=0;
  	    e=0;
        for(long long int row=1;row<=n;row++){
          for(long long int column=1;column<=n;column++){
            if(row%2!=0){
              if(column%2!=0){
                cout<<oddnos[o]<<" ";
                o++;
              }
              else{
                cout<<evennos[e]<<" ";
                e++;
              }
            }
            else if(row%2==0){
              if(column%2!=0){
                cout<<evennos[e]<<" ";
                e++;
              }
              else{
                cout<<oddnos[o]<<" ";
                o++;
              }
            }
          }
          cout<<endl;
        }
      }
      else if(n%2!=0){
        long long int oddnos[(nsqr+1)/2];
        long long int evennos[(nsqr-1)/2];
        for(long long int i=1;i<=nsqr;i++){
          if(i%2==0){
            evennos[e]=i;
            e++;
          }
          else{
            oddnos[o]=i;
            o++;
          }
        }
        o=0;
  	    e=0;

        for(long long int row=1;row<=n;row++){
          for(long long int column=1;column<=n;column++){
            if(row%2!=0){
              if(column%2!=0){
                cout<<oddnos[o]<<" ";
                o++;
              }
              else{
                cout<<evennos[e]<<" ";
                e++;
              }
            }
            else if(row%2==0){
              if(column%2!=0){
                cout<<evennos[e]<<" ";
                e++;
              }
              else{
                cout<<oddnos[o]<<" ";
                o++;
              }
            }
          }
          cout<<endl;
        }
      }






    }
  }
  return 0;
}
