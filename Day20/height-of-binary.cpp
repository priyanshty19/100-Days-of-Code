class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){

        if(node==NULL)
        {
            return 0;
        }

        int ld=height(node->left);
        int rd=height(node->right);


        return (1+max(ld,rd));
    }
};
