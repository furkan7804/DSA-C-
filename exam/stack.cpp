#include<iostream>
using namespace std;
#define n 100
class stack{
    
    int *arr;
    int top;
    public :
     stack(){
        arr = new int[n];
        top = -1;
     }
     void push(int val){
        if(top == n-1){
            cout<< "ERROE" <<endl;

        }
        top++;
        arr[top]= val;

     }
     void pop(){
        if(top==-1){
            cout<<"stack is empty";
        }
        top--;
     }
     int Top(){
        if(top == -1){
            return -1;
        } 
        return arr[top];
     }
     bool empty(){
        return top == -1;
     }
    


};
int main(){
    stack st;
    st.push(20);
    st.push(50);
    st.push(40);
    st.push(39);
   cout<< st.Top()<<endl;
   st.pop();
    return 0;
}