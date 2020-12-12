#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //auto start=chrono::steady_clock::now();
    int testcases;

    scanf("%d",&testcases);
    for(int t=0;t<testcases;t++){
      int pricenos,ceiling;
      int loss=0;

      scanf("%d",&pricenos);
      scanf("%d",&ceiling);
      for(int i=0;i<pricenos;i++){
        int temp;
        scanf("%d",&temp);
        if(temp>ceiling){
          loss=loss+temp-ceiling;
        }
      }
      printf("%d\n",loss);
    }


    //auto end=chrono::steady_clock::now();
    //cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms.";
return 0;
}
