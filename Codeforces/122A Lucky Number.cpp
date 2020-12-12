#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int number;
  long long int finaloutput;
  scanf("%lld",&number);
  auto start=chrono::steady_clock::now();
  long long int ninumber=number;
  int ninumberdata[10];
  int p=0;
  int nicounter=0;
  while(ninumber!=0){
    ninumberdata[p]=ninumber%10;
    if(ninumberdata[p]==9){
      nicounter++;
    }
    ninumber=ninumber/10;
    p++;
  }
  if(p==nicounter){
    if(p%2==0){

    }
  }
  else{
    int flag=0;
    int mark=0;
    long long int tempnumber;
    parth:
      if(flag==0){
        long long int i=0;
        tempnumber=number;
        int fcounter=0;
        int scounter=0;
        long long int numberdata[10];
        while(tempnumber!=0){
          numberdata[i]=tempnumber%10;
          if(numberdata[i]==4){
            fcounter++;
          }
          else if(numberdata[i]==7){
            scounter++;
          }
          tempnumber=tempnumber/10;
          i++;
        }

        if(scounter==fcounter&&scounter!=0&&scounter+fcounter==i){
          finaloutput=number;
          flag=1;
          }
        else{
          number++;
          goto parth;
        }
      }
    printf("%lld\n",number);

  }

  auto end=chrono::steady_clock::now();
  cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms.";
  return 0;
}
