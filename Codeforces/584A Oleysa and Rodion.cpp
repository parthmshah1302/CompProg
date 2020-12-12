#include<bits/stdc++.h>
using namespace std;
int main(){
int oleysa,rodion;
cin>>oleysa>>rodion;

long double initialnumber=pow(10,oleysa-1);
long double finalnumber=pow(10,oleysa);


while(1){
  long double modvalue=fmod(initialnumber,rodion);
  if(modvalue!=0){
    initialnumber=initialnumber+1;;
    }

  else if(initialnumber==finalnumber){
    cout<<"-1";
    break;
  }
  else if(modvalue==0){
    cout<<fixed<<initialnumber;
    break;
  }
}


return 0;
}
