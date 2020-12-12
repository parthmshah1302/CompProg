#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //auto start=chrono::steady_clock::now();
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
      int flag=1;
      int custnos;
      int tfcounter=0;
      int ftcounter=0;
      cin>>custnos;
      for(int j=0;j<custnos;j++){
        int tempnum;
        cin>>tempnum;
        if(tempnum==5){
          tfcounter++;
        }
        else if(tempnum==10){
          if(tfcounter>=1){
            tfcounter--;
            ftcounter++;
          }
          else{
            flag=0;

          }
        }
        else if(tempnum==15){
          if(ftcounter>=1){

            ftcounter--;

          }
          else if(tfcounter>=2){
            tfcounter=tfcounter-2;
          }
          else{
            flag=0;
          }
        }

      }
      if(flag==0){
        printf("NO\n");
      }
      else if(flag==1){
        printf("YES\n");
      }
    }


    // auto end=chrono::steady_clock::now();
    // cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms.";
return 0;
}
