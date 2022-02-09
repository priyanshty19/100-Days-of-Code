#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

          Node* removeDuplicates(Node *head)
          {
            if(!head)
            {
                return head;
            }
            Node* temp=head;
            while(temp->next)
            {
                if(temp->data==temp->next->data)
                    {
                        temp->next=temp->next->next;
                    }
                    else
                    {
                        temp=temp->next;
                    }
            }

            return head;
          }

          Node* insert(Node *head,int data)
