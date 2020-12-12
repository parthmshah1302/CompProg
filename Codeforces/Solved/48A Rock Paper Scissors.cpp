#include<bits/stdc++.h>
using namespace std;
int main(){
  string f,m,s;
  cin>>f>>m>>s;
  int rock=0,paper=0,scissors=0;
  if(f=="rock"){
    rock++;
  }
  else if(f=="paper"){
    paper++;
  }
  else if(f=="scissors"){
    scissors++;
  }
  if(m=="rock"){
    rock++;
  }
  else if(m=="paper"){
    paper++;
  }
  else if(m=="scissors"){
    scissors++;
  }
  if(s=="rock"){
    rock++;
  }
  else if(s=="paper"){
    paper++;
  }
  else if(s=="scissors"){
    scissors++;
  }
  if(paper==1&&rock==2&&scissors==0){
    if(f=="paper"){
      cout<<"F";
    }
    else if(m=="paper"){
      cout<<"M";
    }
    else if(s=="paper"){
      cout<<"S";
    }
  }
  else if(scissors==1&&paper==2&&rock==0){
    if(f=="scissors"){
      cout<<"F";
    }
    else if(m=="scissors"){
      cout<<"M";
    }
    else if(s=="scissors"){
      cout<<"S";
    }
  }
  else if(rock==1&&scissors==2&&paper==0){
    if(f=="rock"){
      cout<<"F";
    }
    else if(m=="rock"){
      cout<<"M";
    }
    else if(s=="rock"){
      cout<<"S";
    }
  }
  else{
    cout<<"?";
  }
}
