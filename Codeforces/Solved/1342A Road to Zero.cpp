// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   cout<<"ssup";
//   return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){

  long long int testcases;
  cin>>testcases;
  for(int i=0;i<testcases;i++){
      long long int minval1=0,minval2=0;
      long long int acounter=0,bcounter=0;
      long long int x=0,y=0;
      long long int a=0,b=0;
      cin>>x>>y;
      cin>>a>>b;
      if(x==0&&y==0){
        cout<<"0";
      }
      else if(x>=0&&y>=0){
        if(x>y){
          bcounter=bcounter+y;
          long long int temp1=x-y;
          acounter=acounter+temp1;
          minval1=(acounter*a)+(bcounter*b);
          acounter=0,bcounter=0;
          acounter=acounter+x+y;
          minval2=minval2+(acounter*a);
          acounter=0,bcounter=0;
          if(minval1<=minval2){
            cout<<minval1;
          }
          else if(minval2<minval1){
            cout<<minval2;
          }
        }
        else if(x<y){
          bcounter=bcounter+x;
          long long int temp1=y-x;
          acounter=acounter+temp1;
          minval1=minval1+(acounter*a)+(bcounter*b);
          acounter=0,bcounter=0;
          acounter=acounter+x+y;
          minval2=minval2+(acounter*a)+(bcounter*b);
          if(minval1<=minval2){
            cout<<minval1;
          }
          else if(minval2<minval1){
            cout<<minval2;
          }
        }
        else if(x==y){
          minval1=(bcounter+x)*b;
          minval2=(acounter+x+y)*a;
          if(minval1<=minval2){
            cout<<minval1;
          }
          else if(minval2<minval1){
            cout<<minval2;
          }
        }
      }
      else if(x<=0&&y<=0){
        x=x*(-1);
        y=y*(-1);
        if(x>y){
          bcounter=bcounter+y;
          int temp1=x-y;
          acounter=acounter+temp1;
          minval1=(acounter*a)+(bcounter*b);
          acounter=0,bcounter=0;
          acounter=acounter+x+y;
          minval2=minval2+(acounter*a);
          acounter=0,bcounter=0;
          if(minval1<=minval2){
            cout<<minval1;
          }
          else if(minval2<minval1){
            cout<<minval2;
          }
        }
        else if(x<y){
          bcounter=bcounter+x;
          int temp1=y-x;
          acounter=acounter+temp1;
          minval1=minval1+(acounter*a)+(bcounter*b);
          acounter=0,bcounter=0;
          acounter=acounter+x+y;
          minval2=minval2+(acounter*a)+(bcounter*b);
          if(minval1<=minval2){
            cout<<minval1;
          }
          else if(minval2<minval1){
            cout<<minval2;
          }
        }
        else if(x==y){
          minval1=(bcounter+x)*b;
          minval2=(acounter+x+y)*a;
          if(minval1<=minval2){
            cout<<minval1;
          }
          else if(minval2<minval1){
            cout<<minval2;
          }
        }
      }
      else if(x+y<0){
        if(x<0){
          x=x*(-1);
          if(x>y){
            bcounter=bcounter+y;
            acounter=acounter+x;
            minval1=minval1+(acounter*a)+(bcounter*b);
            acounter=0,bcounter=0;
            acounter=acounter+x+y;
            minval2=minval2+(acounter*a);
            if(minval1<=minval2){
              cout<<minval1;
            }
            else if(minval2<minval1){
              cout<<minval2;
            }
          }
          else if(x<y){
            bcounter=bcounter+x;
            acounter=acounter+y;
            minval1=minval1+(acounter*a)+(bcounter*b);
            acounter=0,bcounter=0;
            acounter=acounter+x+y;
            minval2=minval2+(acounter*a);
            if(minval1<=minval2){
              cout<<minval1;
            }
            else if(minval2<minval1){
              cout<<minval2;
            }
          }
          else if(x==y){
            bcounter=bcounter+x;
            acounter=acounter+y;
            minval1=minval1+(a*acounter)+(b*bcounter);
            acounter=0,bcounter=0;if(minval1<=minval2){
              cout<<minval1;
            }
            else if(minval2<minval1){
              cout<<minval2;
            }
          }
        }
        else if(y<0){
          y=y*(-1);
          if(y>x){
            bcounter=bcounter+x;
            acounter=acounter+y;
            minval1=minval1+(acounter*a)+(bcounter*b);
            acounter=0,bcounter=0;
            acounter=acounter+x+y;
            minval2=minval2+(acounter*a);
            if(minval1<=minval2){
              cout<<minval1;
            }
            else if(minval2<minval1){
              cout<<minval2;
            }
          }
          else if(y<x){
            bcounter=bcounter+y;
            acounter=acounter+x;
            minval1=minval1+(acounter*a)+(bcounter*b);
            acounter=0,bcounter=0;
            acounter=acounter+x+y;
            minval2=minval2+(acounter*a);
            if(minval1<=minval2){
              cout<<minval1;
            }
            else if(minval2<minval1){
              cout<<minval2;
            }
          }
          else if(x==y){
            bcounter=bcounter+x;
            acounter=acounter+y;
            minval1=minval1+(a*acounter)+(b*bcounter);
            acounter=0,bcounter=0;
            if(minval1<=minval2){
              cout<<minval1;
            }
            else if(minval2<minval1){
              cout<<minval2;
            }
          }
        }

      }
      cout<<"\n";
      }
  return 0;
}
