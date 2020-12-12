#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start=chrono::steady_clock::now();
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
      int rectanglenos;
      cin>>rectanglenos;
      int numofpoints=(4*rectanglenos)-1;
      int points[numofpoints][numofpoints];
      for(int j=0;j<numofpoints;j++){
        cin>>
      }
    }


    auto end=chrono::steady_clock::now();
    cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms."<<endl;
return 0;
}
