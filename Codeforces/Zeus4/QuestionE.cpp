#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  scanf("%d",&testcases);
  for(int t=0;t<testcases;t++){
    int initialnumber;
    int counter=0;
    cin>>initialnumber;
    int num=initialnumber;
    int j=3;
    int i=0;
    int limit=pow(num,0.5);
    int fac[3];
    int twopower=0;
    int twochecker=num;
    while(twochecker%2==0){
      twopower++;
      twochecker=twochecker/2;
    }
    if(twopower>5){
      fac[0]=2;
      fac[1]=4;
      fac[2]=num/8;
      counter=3;
    }
    else{
      while(num%2==0&&i<1){
      fac[i]=2;
      num=num/2;
      i++;
      counter++;
    }

    if(i<2){
      while(i<2&&j<limit){
        if(num%j==0){
          fac[i]=j;
          num=num/j;
          i++;
          counter++;
        }
        else if(num%j!=0){
          j=j+2;
        }
      }
      if(i==2){
        fac[i]=num;
        counter++;
        }
      }
    }

  if(counter==3){
    cout<<"YES"<<endl;
    for(int p=0;p<3;p++){
      cout<<fac[p]<<" ";
    }
  }
  else{
    cout<<"NO"<<endl;
  }

  }
  return 0;
}
