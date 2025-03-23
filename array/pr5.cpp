#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
  vector<int> arr[] = {2,3,10,90};
  int t ;
  cin>> t;
  for(int i =0 ;i<arr.size;i++){
    for(int j = 0;j<arr.size;j++)
    if(arr[j]==t-arr[i]){
        cout<< (i,j) ;
        
    }
  }
}