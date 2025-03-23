#include <iostream>
using namespace std;

// Function to check if a number is prime
void isPrime(int num) {
    // if (num <= 1) {
    //     return false;
    // }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            cout << i;
        }
    }
    
}

// // Function to print prime numbers from 2 to n
// void printPrimes(int n) {
//     for (int i = 2; i <= n; i++) {
//         if (isPrime(i)) {
//             cout << i << " ";
//         }
//     }
// }

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Prime numbers from 2 to " << n << " are: ";
    //printPrimes(n);
    isPrime(n);

    return 0;
}

