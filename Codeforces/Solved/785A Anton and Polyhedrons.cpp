#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  int facecounter=0;
  for(int i=0;i<testcases;i++){
    string poly;
    cin>>poly;
    if(poly=="Tetrahedron"){
      facecounter=facecounter+4;
    }
    else if(poly=="Icosahedron"){
      facecounter=facecounter+20;
    }
    else if(poly=="Cube"){
      facecounter=facecounter+6;
    }
    else if(poly=="Octahedron"){
      facecounter=facecounter+8;
    }
    else if(poly=="Dodecahedron"){
      facecounter=facecounter+12;
    }
  }
  cout<<facecounter;
return 0;
}
