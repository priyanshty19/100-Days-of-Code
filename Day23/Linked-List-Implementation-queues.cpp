#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};

struct Queue
{
    Node *front, *rear;
    Queue()
    {
        front=NULL;
        rear=NULL;
    }
    void enque(int x)
    {
        Node *temp=new Node(x);
        if(front==NULL)
        {
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }
    void deque()
    {
        if(front==NULL)
        {
            return;
        }
        Node *temp=front;
        front=front->next;
        if(front==NULL)
        {
            rear=NULL;
        }
        delete(temp);
    }

};

int main()
{
    Queue q;
    q.enque(5);
    q.enque(15);
    q.enque(25);

    q.deque();
    q.deque();


    return 0;
}
