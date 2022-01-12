#include <iostream>
using namespace std;

struct Queue
{
    int size,cap;
    int *arr;
    Queue(int c)
    {
        cap=c;
        size=0;
        arr=new int[cap];
    }

bool isFull()
{
    return (size==cap);
}

bool isEmpty()
{
    return size==0;
}

void deque()
{
    if(isEmpty())
    {
        return;
    }
    for(int i=0; i<size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
}

void enqueue(int x)
{
    if(isFull())
    {
        return;
    }
    arr[size]=x;
    size++;
}

int getFront()
{
    if(isEmpty())
    {
        return -1;
    }
    return arr[0];
}

int getRear()
{
    if(isEmpty())
    {
        return -1;
    }
    return arr[size];
}
};

int main()

{
    Queue q(5);
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);

    q.deque();
    q.deque();
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;

    return 0;
}
