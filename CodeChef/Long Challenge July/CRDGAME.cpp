#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start=chrono::steady_clock::now();
    long long int testcases;
    cin>>testcases;
    for(long long int i=0;i<testcases;i++){
      long long int chefp=0,mortyp=0;
      long long int chefcard,cheftemp,mortycard,mortytemp;
      long long int rounds;
      cin>>rounds;
      for(long long int j=0;j<rounds;j++){
          cheftemp=0,mortytemp=0;
          cin>>chefcard>>mortycard;
          while(chefcard!=0){

            cheftemp=cheftemp+chefcard%10;
            //cout<<"Value of cheftemp is "<<cheftemp<<endl;
            chefcard=chefcard/10;
            }
          while(mortycard!=0){

            mortytemp=mortytemp+mortycard%10;
            mortycard=mortycard/10;
            }
          if(cheftemp>mortytemp){
            chefp++;
          }
          else if(mortytemp>cheftemp){
            mortyp++;
          }
          else if(cheftemp==mortytemp){
            chefp++;
            mortyp++;
          }
      }
      if(chefp>mortyp){
        cout<<"0 "<<chefp<<endl;
      }
      else if(mortyp>chefp){
        cout<<"1 "<<mortyp<<endl;
      }
      else if(mortyp==chefp){
        cout<<"2 "<<chefp<<endl;
      }
    }


    auto end=chrono::steady_clock::now();
    //cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms."<<endl;
return 0;
}
