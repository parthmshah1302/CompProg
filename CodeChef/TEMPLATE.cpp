#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    auto start=chrono::steady_clock::now();



    auto end=chrono::steady_clock::now();
    cout<<"Time elapsed is : "<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" ms."<<endl;
return 0;
}
