#include <iostream>
using namespace std;

class MyStack
{
    private:
    int *arr;
    int top;

    public:

    MyStack(int c)
    {
        arr=new int[c];
        top=-1;
    }
    void push(int x)
    {
        top++;
        arr[top]=x;
    }
    int pop()
    {
        int res=arr[top];
        top--;
        return res;
    }
    int peek()
    {
        return arr[top];
    }
    int size()
    {
        return (top+1);
    }
    bool isEmpty()
    {
        return (top==-1);
    }

};

int main()
{
    MyStack s(10);
    s.push(5);
    s.push(15);
    s.push(25);

    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;

    s.push(35);

    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}
