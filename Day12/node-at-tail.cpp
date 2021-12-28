SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode* temp=new SinglyLinkedListNode(data);

    if(head==NULL)
    {
        return head=temp;
    }
    else
    {
        SinglyLinkedListNode* p=head;
        while(head->next!=NULL)
        {
            head=head->next;
        }
        head->next=temp;
        return p;
    }


}
