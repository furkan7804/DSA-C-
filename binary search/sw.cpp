#include<iostream>
#include<vector>
using namespace std;
int findevalue(vector<int>arr,int k){
    int cr = 0,max=0;
    for(int i = 0;i<k;i++){
        cr +=arr[i];
    }max = cr;
    for(int i = k;i<arr.size();i++){
        cr+=arr[i];
        cr-=arr[i-k];
        if(cr>max){
            max = cr;
        }

    }
    return max;
}
int main(){
    vector <int> arr = {1,2,-3,4,-3,5,9,-20,2,10};
    int k ;
    cin >>k;
    int r = findevalue(arr,k);
    cout<< r ;
    return 0;

    
}