#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        data=d;
        next=NULL;

    }
};

void inseertend(Node* &head, int x)
{
    Node* temp=new Node(x);
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        head->next=temp;
        while(head->next!=NULL)
        {
            head=head->next;
        }
    }
    cout<<head->data<<"->";
}



int main()
{
    Node* head=NULL;

    inseertend(head, 10);
    inseertend(head, 20);
    inseertend(head, 30);
    inseertend(head, 40);

    return 0;
}
