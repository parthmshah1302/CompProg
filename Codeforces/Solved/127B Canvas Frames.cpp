#include<bits/stdc++.h>
typedef long long int lli;
#define loop(i,a,b); for(int i = a; i < b; i++)
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //auto start=chrono::steady_clock::now();
    int sticknos;
    cin>>sticknos;
    int stickdata[sticknos]
    loop(i,0,sticknos){
      cin>>stickdata[i];
    }
    int n=sizeof(stickdata)/sizeof(stickdata[0]);
    sort(stickdata,stickdata+n);
    int twocounter=0,fourcounter=0;
    int counter=1;
    loop(i,0,sticknos-1){
      if(stickdata[i]==stickdata[i+1]){
        counter++;
        if(counter==2){
          twocounter++;

        }
        else if(counter%4==0){
          twocounter--;
          fourcounter++;

        }
        else if(counter%4==2){
          counter-=2;
          twocounter++;
        }
      }
      else{
        counter=1;
      }
    }

    //cout<<"twocounter is "<<twocounter<<" and fourcounter is "<<fourcounter<<endl;
    cout<<(twocounter/2)+fourcounter;
    //auto end=chrono::steady_clock::now();
    //cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms.";
return 0;
}
