#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i =1;i<=4;i++){
        for(int j=1;j<=6;j++){
           if(j==1||j==6||i==1||i==4){
            cout<<j;
           }
           else{
            cout<<" ";
           }
        }
        cout<<endl;
    }
}