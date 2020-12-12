#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //auto start=chrono::steady_clock::now();
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
      int k;
      cin>>k;
      k=k-1;

      int row;
      int column=0;
      for(row=0;row<8;){
        //cout<<"value of row is: "<<row<<endl;
        if(row==0&&column==0){
          cout<<"O";
          column++;
        }
        else{
          if(column<8){
            if(k>0){
              cout<<".";
              column++;
              k--;
            }
            else{
              cout<<"X";
              column++;
            }
          }
          else if(column==8){
            cout<<endl;
            column=0;
            row++;

            }
          }


        // if(column<8){
        //
        //   //cout<<"value of column1 is: "<<column<<endl;
        // }

    }
    //cout<<endl;
  }


    //auto end=chrono::steady_clock::now();
    //cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms."<<endl;
return 0;
}
