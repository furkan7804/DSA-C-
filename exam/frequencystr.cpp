#include <iostream>
#include <unordered_map>
using namespace std;
 

 void frequencies(const string& str) {
    unordered_map<char, int> Map;

    
    for (char ch : str) {
        Map[ch]++;  
    }

   
    cout << "Character frequencies: { ";
    for (const auto& entry : Map) {
        cout << "'" << entry.first << "': " << entry.second << ", ";
    }
    cout << "\b\b }" << endl;
}  

int main() {
    
    string str = "hello world";

    
    frequencies(str);

    return 0;
}