#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //auto start=chrono::steady_clock::now();
    int testcases;
    scanf("%d",&testcases);
    for(int t=0;t<testcases;t++){
      unsigned long long int ts;
      long long int jscounter=0;
      scanf("%llu",&ts);
        if(ts%2!=0){
          jscounter=(ts-1)/2;
          printf("%lld\n",jscounter);

        }
        else{
          //cout<<"it went in here"<<endl;
          unsigned long long int tempts=ts;
          long long int powchecker=(int)log2(tempts);
          long long int power;
          unsigned long long int initialnum=pow(2,powchecker);
          if(ts==initialnum){
            printf("0\n");
            }
          else{
            //cout<<"tempts is"<<tempts<<endl;
            while(tempts%2==0){
              //cout<<"while loop is executed"<<endl;
              jscounter++;
              tempts=tempts/2;
            }
            //cout<<"jscounter is"<<jscounter<<endl;
            power=pow(2,jscounter+1);
            //cout<<"power is "<<power<<endl;
            jscounter=ts/power;
            printf("%lld\n",jscounter);
          }

        }
      }
// auto end=chrono::steady_clock::now();
    // cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms.";
return 0;
}
