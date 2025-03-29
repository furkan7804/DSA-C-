#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = tail = NULL;
    }
    void push(int val)
    {
        Node *newnode = new Node(val);
        if (empty())
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop(){
         if(empty()){
            cout<< "ll is empty";
         }
        
            Node *temp = head;
            head = head->next;
            delete temp;

        
    }
    int front(){
        if(empty()){
            return -1;
        }
        return head->data;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    Queue q;
    q.push(2);
    q.push(4);
    q.push(6);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
       }
    return 0;
}