#include<iostream>
#include<vector>
using namespace std;

int findValue(vector<int> arr, int k) {
    int currentSum = 0, maxSum = 0;

    // Calculate the sum of the first 'k' elements
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    // Sliding window: Slide the window across the array
    for (int i = k; i < arr.size(); i++) {
        currentSum += arr[i];        // Add the new element to the window
        currentSum -= arr[i - k];    // Remove the element that is leaving the window

        // Update the maxSum if the current window sum is larger
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int main() {
    vector<int> arr = {1, 2, -3, 4, -3, 5, 9, -20, 2, 10};
    int k;
    cin >> k;

    int result = findValue(arr, k);
    cout << result << endl;

    return 0;
}
