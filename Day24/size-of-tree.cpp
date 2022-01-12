#include <iostream>
using namespace std;


struct Node
{
    int key;
    Node* right;
    Node* left;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

int SizeOfTree(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+SizeOfTree(root->right)+SizeOfTree(root->left);
}

int main()
{
    Node* root=new Node(10);
    root->right=new Node(30);
    root->left=new Node(20);
    root->right->right=new Node(70);
    root->right->right->right=new Node(80);
    root->left->left=new Node(40);
    root->left->right=new Node(50);

    cout<<SizeOfTree(root)<<endl;

    return 0;
}
