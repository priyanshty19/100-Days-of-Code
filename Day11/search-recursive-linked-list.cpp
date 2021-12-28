#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

int finder(Node* head, int x)
{
    int pos=1;

    if(head==NULL)
    {
        return -1;
    }
    if(head->data==x)
    {
        return 1;
    }
    int res=finder(head->next, x);
    if(res==-1)
    {
        return -1;
    }
    return res+1;
}


int main()
{
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    Node* forth=NULL;

    head=new Node();
    second=new Node();
    third=new Node();
    forth=new Node();

    head->data=10;
    head->next=second;

    second->data=5;
    second->next=third;

    third->data=20;
    third->next=forth;

    forth->data=15;
    forth->next=NULL;

    cout<<finder(head, 30);

    return 0;
}
