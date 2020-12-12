#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long int testcases;
  scanf("%lld",&testcases);
  for(long long int t=0;t<testcases;t++){
    long long int n;
    scanf("%lld",&n);
    if(n==0){
      printf("0");
    }
    else if(n==1){
      printf("2");
    }
    else{
      long long int nsqr=pow(n,2);
      long long int oddnos[nsqr];
      long long int evennos[nsqr];
      long long int e=0,o=0;
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
      o=0,e=0;

      if(n%2==0){
        for(long long int i=1;i<=n;i++){
          for(long long int j=1;j<=n;j++){
            if(i%2!=0){
              if(j%2!=0){
                printf("%lld ",evennos[e]);
                e++;

              }
              else{
                printf("%lld ",oddnos[o]);
                o++;
              }
            }
            else if(i%2==0){
              if(j%2!=0){
                printf("%lld ",oddnos[o]);
                o++;
              }
              else{
                printf("%lld ",evennos[e]);
                e++;
              }
            }
          }
          printf("\n");
        }
      }
      else{
        for(long long int i=1;i<=n;i++){
          for(long long int j=1;j<=n;j++){
            if(i%2!=0){
              if(j%2!=0){
                printf("%lld ",oddnos[o]);
                o++;
              }
              else{
                printf("%lld ",evennos[e]);
                e++;
              }
            }
            else if(i%2==0){
              if(j%2!=0){
                printf("%lld ",evennos[e]);
                e++;
              }
              else{
                printf("%lld ",oddnos[o]);
                o++;
              }
            }
          }
          printf("\n");
        }
      }
    }
  }
  return 0;
}
