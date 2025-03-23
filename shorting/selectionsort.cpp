#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {4,2,5,3,1};
    for(int i =0;i<arr.size()-1;i++){
      int min = i;
      for(int j = i+1;j<arr.size();j++){
        if(arr[j]<arr[min]){
            min = j;
        }
       }
       swap(arr[i],arr[min]);
     }
     for(int i = 0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
    }