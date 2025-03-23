#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {0, 1, 0, 2, 1};

    for (int i = 0; i < arr.size(); i++)
    {
        int cr = arr[i];
        int pr = i - 1;
        // for(int j=0;j<arr.size();j++){
        while (pr >= 0 && arr[pr] > cr)
        {
            arr[pr + 1] = arr[pr];
            pr--;
        }
        arr[pr + 1] = cr;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    return 0;
}
//}