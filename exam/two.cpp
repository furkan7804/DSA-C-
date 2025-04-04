#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr ={2,4,5,3};
    int t;
    cin >> t;
    for(int i = 0;i<arr.size();i++){
        for(int j =i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==t){
                cout<<i<<j;
            }      
            
        }
    }
}