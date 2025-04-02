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
class list
{
    Node *head;
    Node *tail;

public:
    list()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop_front(){
        if(head == NULL){
            return ;
        }
        Node* temp = head;
        head = head ->next;
        temp ->next = NULL;
         delete temp;
    }
    void pop_back(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        while(temp->next!= tail){
            temp = temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail = temp;
    }
    void insert(int val,int pos){
        if(pos<0){
            return;
        }
        if(pos==0){
            push_front(val);

        }
        Node* temp = head;
        for(int i =0;i<pos-1;i++){
            if(temp==NULL){
                return;
            }
            temp = temp->next;
        }
        Node* newnode= new Node(val);
        newnode->next=temp->next;
        temp->next=newnode;
    }
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";

            temp = temp->next;
        }
    }
    
};

int main()
{
    list l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_back(4);
     l.pop_front();
     l.pop_back();
    l.insert(7,1);
    l.print();
    
    return 0;
}