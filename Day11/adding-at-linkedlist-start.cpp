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

void insertbegin(Node* &head, int x)
{
    Node* temp=new Node(x);
    temp->next=head;
    head=temp;
}

void printer(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }

}



int main()
{
    Node* head=NULL;

    insertbegin(head,30);
    insertbegin(head,20);
    insertbegin(head,10);
    insertbegin(head,50);
    printer(head);



    return 0;
}
