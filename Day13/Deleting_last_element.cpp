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

void  delete_from_end(Node* &head)
{
    if(head->next == NULL)
    {
        delete head;
    }
    if(head==NULL)
    {
        head=NULL;
    }

    else
    {
        Node* temp=head->next;
        if(temp->next==NULL)
        {
            delete temp;
        }


    }

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
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);

    delete_from_end(head);
    printer(head);

    return 0;
}
