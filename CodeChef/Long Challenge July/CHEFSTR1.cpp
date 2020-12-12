#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start=chrono::steady_clock::now();
    long long int testcases;
    cin>>testcases;
    for(long long int i=0;i<testcases;i++){
      long long int stringnos;
      cin>>stringnos;
      long long int stringdata[stringnos];
      long long int skip=0;
      for(long long int j=0;j<stringnos;j++){
        cin>>stringdata[j];
        if(j!=0){
          if((stringdata[j]-stringdata[j-1]-1)>0){

            skip+=(stringdata[j]-stringdata[j-1]-1);
          }
          else if((stringdata[j]-stringdata[j-1]-1)<0){
            skip+=((-1)*(stringdata[j]-stringdata[j-1])-1);
          }

        }
      }
      cout<<skip<<endl;
    }


    auto end=chrono::steady_clock::now();
    //cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms."<<endl;
return 0;
}
