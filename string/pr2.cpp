#include<iostream>
#include<string>
using namespace std;
bool prim(string w){
    int n = w.length();
//    int l = 0;

//    int r = n-1;
//           for(int i = 0 ; i<n;i++){
//         if(w[l]==w[r]){
//             l++;
//             r--;
//     return true;
//               }
                    
                    
//        }
//        return false;
 string g ;
       for(char i : w){
        g =  i + g;
       }
       return w == g ;

}
int main(){
    string word = "nayan";
    bool r = prim(word);
  cout << r;
}