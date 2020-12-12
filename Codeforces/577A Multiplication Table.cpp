#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int tablesize=10,number=10;
  long long int counter=0;
  // cin>>tablesize>>number;
    for(long long int i=1;i<=tablesize;i++){
      if(number%i==0&&(i*tablesize)>=number){
        counter++;
        }
    }
  cout<<counter;
  return 0;
}
