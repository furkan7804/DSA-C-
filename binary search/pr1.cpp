#include <iostream>
#include<vector>
using namespace std;
int bs(int arr[],int n)
{
    int s = 1,e = n - 2;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid+1])
        {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
}

int main()
{
    int n = 6;
   int  arr[n] = {7, 8, 9, 10, 3, 5};
    int r = bs(arr,n);
    cout<< arr[r];
}