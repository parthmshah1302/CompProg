#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start=chrono::steady_clock::now();
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
      long long int n;
      int counter=0;
      cin>>n;
      if(n==1){
        counter=0;
      }
      else if(n%3!=0&&n!=1){
        counter=-1;
      }
      else{

        while(n!=1){
          if(n%6==0){
            n=n/6;
            counter++;
          }
          else if(n%3==0){
            n=n*2;
            counter++;
          }
          else{
            counter=-1;
            n=1;
          }
        }

      }
      cout<<counter<<endl;
    }


    auto end=chrono::steady_clock::now();
    //cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms.";
return 0;
}
