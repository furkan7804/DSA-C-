#include <iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int val)
    {
        if (top == n - 1)
        {
            cout << "no";
            return;
        }
        top++;
        arr[top] = val;
    }
    void pop()
    {
        if (top == -1)
        {
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
};
int main()
{
    stack st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    cout << st.empty();
}