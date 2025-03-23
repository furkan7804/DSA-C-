#include <iostream>
using namespace std;
void func(int arry[], int size)
{
    int s = 0;
    int end = size - 1;
    for (int i = 0; i < size; ++i)
    {
        if (arry[s] < arry[end])
        {
            end++;
        }
        else
        {
            s++;
        }
    }
}
int main()
{
    int n = 5;
    int arry[5] =
        {10, 13, 15, 9, 20};

    func(arry, n);
    cout << arry[3];
}