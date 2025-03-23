#include <iostream>
#include <vector>
using namespace std;
int maxsubarray(vector<int> arr, int k)
{
    int crsum = 0, max = 0;
    for (int i = 0; i < k; i++)
    {
        crsum += arr[i];
    }
    max = crsum;
    for (int i = k; i < arr.size(); i++)
    {
        crsum += arr[i];
        crsum -= arr[i - k];
        if (crsum > max)
        {
            max = crsum;
        }
    }
    return max;
}
int main()
{
    vector<int> array = {2, 3, 4, 20, 5, 6, 7, 8};
    int k;
    cin >> k;
    int result = maxsubarray(array, k);
    cout << result;
}