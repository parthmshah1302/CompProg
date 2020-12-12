#include<bits/stdc++.h>
using namespace std;
int main(){
  //I dont know what these lines do, but Errichto said they are magic
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int testcases;
  scanf("%d",&testcases);
  for(int i=0;i<testcases;i++){
    int numberofdigits;
    scanf("%d",&numberofdigits);
    int initialnumber;
    int finalnumber;
    int flag=0;
    initialnumber=pow(10,numberofdigits-1);
    finalnumber=pow(10,numberofdigits)-1;
    //cout<<"initialnumber is "<<initialnumber<<"and finalnumber is "<<finalnumber<<endl;
    int numdig[numberofdigits];
    int temp;
    int zerochecker,divchecker;
    for(int k=initialnumber;k<=finalnumber;k++){
      cout<<"k is "<<k<<endl;
      cout<<"for works"<<endl;
      if(flag==0){
        cout<<"flag 0 works"<<endl;
        if(k>0){
          cout<<"k 0 works"<<endl;
          temp=k;
          zerochecker=0;
          divchecker=0;
          for(int j=0;j<numberofdigits;j++){
            cout<<"seperation for works"<<endl;
              numdig[j]=temp%10;
              if(temp%10==0){
                zerochecker=-1;
                cout<<"zerochecker is "<<zerochecker<<endl;
                }
              temp=temp/10;
          }
          for(int j=0;j<numberofdigits;j++){
            cout<<"divchecker for works"<<endl;
            if(k%numdig[j]==0&&zerochecker!=-1){
              cout<<"divchecker if works"<<endl;
              divchecker=-1;
            }
          }
            if(zerochecker==0&&divchecker==0){
              flag=k;
              cout<<"flag is"<<flag<<endl;
            }
        }
      }

    }
    if(flag!=0){
      cout<<flag;
    }
    else{
      cout<<"-1";
    }
  }
  return 0;
}
