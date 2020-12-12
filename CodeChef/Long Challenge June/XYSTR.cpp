#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start=chrono::steady_clock::now();
    int testcases;
    scanf("%d",&testcases);
    for(int t=0;t<testcases;t++){
      string boygirl;
      cin>>boygirl;
      int paircounter=0;
      int stringlength=boygirl.length();
      for(int i=0;i<stringlength-1;i++){
        if((boygirl.at(i))!=boygirl.at(i+1)){
          paircounter++;

          i++;
        }
      }
      printf("%d\n",paircounter);
    }


    auto end=chrono::steady_clock::now();
    //cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms.";
return 0;
}
