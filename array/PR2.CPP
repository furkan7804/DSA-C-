#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

void swep(int arr[], int size)
{
    for (int i = 0; i < 6; i += 2)
    {

        if (i + 1 < size)
        {
            int tamp = 0;
            tamp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tamp;
        }
    }
}
int main()
{

    int arr[6] = {
        1,
        2,
        3,
        4,
        5,
        6,
    };
    swep(arr, 6);
    print(arr, 6);
}