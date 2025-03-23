#include<iostream>
#include<string>
using namespace std;
int main(){
    string word = "Hello i ";
   int  n = word.length();
        //        for(int i = 0;i<=n;i++){
        //     char j ;
        //     word = j + word ;
        //      cout<<word;
        // }
        string g ;
       for(char i : word){
        g =  i + g;
       }
       for(int i = 0 ; i<n;i++){
        cout<<g[i];
       }

}