#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcases;
    cin >> testcases;
    for(int i=0;i<testcases;i++){
        string word;
        string shortenedword;
        cin>>word;
        if(word.size()>10){
            int lentoprint=word.size()-2;
            for(int k=0;k<word.size();k++){
                if(k==0){
                    cout<<word[0]<<lentoprint;
                }
                else if(k==word.size()-1){
                    cout<<word[k];
                }
            }
            }
        else{
    	cout<<word;
        }
    
        cout<<endl;
    }
 
    return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 

