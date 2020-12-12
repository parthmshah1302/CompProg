#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start=chrono::steady_clock::now();
    int n,m;
    int ans;
    cin>>n>>m;
    if(n<m){
      cout<<"-1";
    }
    else if(n==m){
      cout<<n;
    }
    else{
      int twocounter=n/2;
      int onecounter=n-2*twocounter;
      int stepcounter=onecounter+twocounter;
      if(stepcounter%m==0){
        cout<<stepcounter;
      }
      else{
        while (twocounter>0&&stepcounter%m!=0) {
          twocounter--;
          stepcounter++;
          if(stepcounter%m==0){
            ans=stepcounter;
            cout<<stepcounter;
          }

        }
        if(twocounter==0&&stepcounter%m!=0){
          cout<<"-1";
        }
      }
    }

    // auto end=chrono::steady_clock::now();
    // cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms.";
return 0;
}
