#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int kadansalog(vector<int> arr)
{
    int max = INT_MIN;
    int crsum = 0;
    for (int value : arr)
    {
        crsum += value;
        if (max < crsum)
        {
            max =+ crsum;
        }
        else if (crsum < 0)
        {
            crsum = 0;
        }
    }
    return max; 
}

int main()
{
    vector<int> array = {2, 4, 6, 2, 4, 10};
    int r = kadansalog(array);
    cout << r << endl;
}