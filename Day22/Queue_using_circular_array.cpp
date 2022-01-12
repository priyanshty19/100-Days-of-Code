#include <iostream>
using namespace std;

struct Queue
{
    int *arr;
    int front, size, cap;
    Queue(int c)
    {
        arr=new int[c];
        cap=c;
        front=0;
        size=0;
    }

    bool isFull()
    {
        return (size==cap);
    }
    bool isEmpty()
    {
        return size==0;
    }
    int getFront()
    {
        if(isEmpty())
        {
            return -1;
        }
        return 0;
    }
    int getRear()
    {
        if(isEmpty())
        {
            return -1;
        }
        return (front+size-1)%cap;
    }
    void enqeue(int x)
    {
        if(isFull())
        {
            return;
        }
        int rear=getRear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }
    void deque()
    {
        if(isEmpty())
        {
            return;
        }
        front=(front+1)%cap;
        size--;
    }


};

int main()
{
    Queue q(5);
    q.enqeue(5);
    q.enqeue(15);
    q.enqeue(25);

    q.deque();
    q.deque();
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;


    return 0;
}
