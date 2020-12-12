#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    //cout<<"\n";
    int counter=0;
    
    for(int i=0;i<testcases;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            int number;
            cin>>number;
            sum=sum+number;
        }
        if(sum>=2){
            counter++;
        }
    }
    cout<<counter;
    return 0;
}
