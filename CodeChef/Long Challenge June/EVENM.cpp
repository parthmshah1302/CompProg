#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start=chrono::steady_clock::now();
    int testcases;
    scanf("%d",&testcases);
    for(int t=0;t<testcases;t++){
      int n;
      long long int evennoslen;
      long long int oddnoslen;
      scanf("%d",&n);
      long long int nsqr=pow(n,2);
      if(nsqr%2==0){
        evennoslen=nsqr/2;
        oddnoslen=nsqr/2;
      }
      else if(nsqr%2!=0){
        evennoslen=(nsqr+1)/2;
        oddnoslen=(n-((nsqr+1)/2)); //Check if some error occurs
      }
      long long int evennos[evennoslen];
      long long int oddnos[oddnoslen];
      long long int ei=0;
      long long int oi=0;
      for(int i=0;i<nsqr;i++){
        if(i%2==0){
          evennos[ei]=i;
        }
        else if(i%2!=0){
          oddnos[oi]=i;
        }
      }
      long long int stelement=oddnos[0];
      long long int fourthelement=oddnos[1];
      long long int secelement=evennos[0];
      long long int thirdelement=evennos[1];
      long long int allnos[ei+oi];
      long long int allnoscounter=0;
      for(int i=2;i<ei;i++){
        allnos[allnoscounter]=evennos[i];
        allnoscounter++;
      }
      for(int i=2;i<oi;i++){
        allnos[allnoscounter]=oddnos[i];
        allnoscounter++;
      }
      allnoscounter=0;
      for(int i=1;i<=nsqr;i++){
        for(int j=i;j<=i+n;j++){
          if(j==1){
            printf("%lld",stelement);
          }
          else if(j==n){
            printf("%lld",secelement);
          }
          else if(j==((pow(n,2)-n+1))){
            printf("%lld",thirdelement);
          }
          else if(j==pow(n,2)){
          printf("%lld",fourthelement);
          }
          else{
            printf("%lld",allnos[allnoscounter]);
            allnoscounter++;
          }
          if(j!=n-1){
            printf(" ");
          }
        }

        if(i!=nsqr-1){
          printf("\n");
        }
      }


    }


    auto end=chrono::steady_clock::now();
    cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms."<<endl;
return 0;
}
