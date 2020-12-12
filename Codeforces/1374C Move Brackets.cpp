#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start=chrono::steady_clock::now();
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
      int bracketnos;
      cin>>bracketnos;
      char bracketdata[bracketnos];
      for(int j=0;j<bracketnos;j++){
        cin>>bracketdata[j];
      }
      for(int j=0;j<bracketnos;j++){
        cout<<bracketdata[j];
      }
      cout<<endl;
    }



    auto end=chrono::steady_clock::now();
    cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms.";
return 0;
}
