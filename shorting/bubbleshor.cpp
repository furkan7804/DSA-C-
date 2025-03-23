#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr={1,0,1,0,2};
    for(int i = 0;i<arr.size()-1;i++){
        for(int j = 0;j<arr.size()-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}