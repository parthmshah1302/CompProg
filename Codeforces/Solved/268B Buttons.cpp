// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   cout<<"ssup";
//   return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int buttonnos;
  cin>>buttonnos;
  long long int apsum=0;
  for(long long int i=1;i<=buttonnos;i++){
    apsum=apsum+i;
  }
  long long int penamount=0;
  long long int pencounter=0;
  long long int j=buttonnos-1;
  for(int i=1;i<=buttonnos;i++){
    pencounter=i-1;
    penamount=penamount+(j*pencounter);
    j--;
  }
  long long int worsecounter=penamount+apsum;
  cout<<worsecounter;
  return 0;
}
