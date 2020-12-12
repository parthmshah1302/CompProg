#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  scanf("%d",&testcases);
  for(int t=0;t<testcases;t++){
    int numberofdays,totalshows,consecutivedays;
    scanf("%d %d %d",&numberofdays,&totalshows,&consecutivedays);
    int showdata[numberofdays];

    for(int i=0;i<numberofdays;i++){
      scanf("%d",&showdata[i]);

    }
    int currentcounter=1;
    long long int mincounter=100000000000000;
    long long int finaloutput=1000000000000;

    for(int i=0;i<numberofdays;i++){
      int temp2arr[consecutivedays];
      for(int j=i;j<consecutivedays;j++){

        temp2arr[j]=showdata[j];

      }
      sort(temp2arr,temp2arr+consecutivedays);
      for(int j=0;j<consecutivedays;j++){

        cout<<temp2arr[j]<<",";

      }
      cout<<endl;
      // if((sizeof(temp2arr)/sizeof(temp2arr[0]))==consecutivedays){
      //   sort(temp2arr,temp2arr+consecutivedays);
      //
      //   for(int k=0;k<consecutivedays-1;k++){
      //
      //     if(temp2arr[k]!=temp2arr[k+1]){
      //       currentcounter++;
      //       }
      //   }
        // if(currentcounter<finaloutput){
        //   finaloutput=currentcounter;
        //}
      }


    }
    //cout<<finaloutput<<endl;

  return 0;
}
