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

void NodeAtK(Node* root, int K)
{
    if(root==NULL)
    {
        return;
    }
    if(K==0)
    {
        cout<<root->key<<endl;
    }
    NodeAtK(root->left, K-1);
    NodeAtK(root->right, K-1);
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

    NodeAtK(root, 2);


    return 0;
}
