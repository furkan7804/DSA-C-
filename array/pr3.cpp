#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector <int> arr = {1,2,-3,4,-3,5,9,-20,2,10};
    int max = 0;
    int crsum = 0;
    int k = 3;
    for(int i = 0 ; i<k;i++){
        crsum+=arr[i];
    //     for(int j = i;j<7;j++){
    //         for(int k = i ; k < j ; k++)
    //         {
    //             cout<<arr[k];
    //         }
    //         cout<<" "  ;

    //     }
    //     cout<< endl ;
    // if(crsum<max){
    //     max = crsum;
    // }
    // if(crsum<0){
    //     crsum = 0;
    // }
    
    }
    for(int j = k ; j<arr.size() ; j++){
     crsum +=arr[j];
     crsum +=arr[j-k];
       if(crsum>max){
        max = crsum;
       }
        }
    cout << max;
    return 0;
}
