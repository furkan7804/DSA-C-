#include<iostream>
#include<vector>
using namespace std;
int main(){
    int c1 =0;
    int c2 =0;
    int c3 =0;
   vector <int> arr= {2,1,0,1,0,2,1,2,0};
    for( int i = 0;i<arr.size();i++){
        if(arr[i]==0) c1++;
        else if (arr[i]==1) c2++;
        else if(arr[i]==2)c3++;
    }
    int ind=0;
    for(int i = 0;i<c1;i++){
        arr[ind++]= 0;
    }
    for(int i = 0;i<c2;i++){
        arr[ind++]= 1;
    }for(int i = 0;i<c3;i++){
        arr[ind++]= 2;
    }
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}