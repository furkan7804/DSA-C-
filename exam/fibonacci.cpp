#include <iostream>
#include <vector>
using namespace std;


void printfibonacci(int count) {
    
    if (count <= 0) {
        cout << "Fibonacci series: []" << endl;
        return;
    }

    
    vector<int> finonacci;

   
    finonacci.push_back(0);  
    if (count > 1) finonacci.push_back(1);  

    
    for (int i = 2; i < count; ++i) {
        int nextTerm = finonacci[i - 1] + finonacci[i - 2];
        finonacci.push_back(nextTerm);
    }

    
    
    for (int i = 0; i < finonacci.size(); ++i) {
        cout << finonacci[i];
        if (i != finonacci.size() - 1) {
            cout << " ";
        }
    }
   
}

int main() {
    
    int count ;
    cin>>count;

    
    printfibonacci(count);

    return 0;
}