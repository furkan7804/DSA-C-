#include<iostream>

using namespace std;
int fun(int n){
    int D = 0,a;
    while(n>0){
        a=n%10;
        n=n/10;
        D=D+a;
        

    
    }
    cout<<D;
    return D;
}
int main()
{
    int n;
    cin>>n;
    fun(n);
    
}