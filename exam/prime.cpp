#include<iostream>
#include<vector>
using namespace std;
bool isprime(int num){
    for(int i = 2;i<num;i++){
        if(num %i==0){
            return false;
        }
    }
    return true;
}
int main(){
    
   vector<vector<int>> arr = {
    {2,4,6,},
    {3,5,8},
    {9,11,12}};
    vector<int> prime;
    
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr[i].size();j++){
        //      if(arr[i]%)
         
        if(isprime(arr[i][j])){
            prime.push_back(arr[i][j]);
            
        }
        
    }
}
    for(int i =0;i<prime.size();i++ ){
        cout<<prime[i];
    }

}
