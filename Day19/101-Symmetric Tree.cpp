class Solution {
public:
    bool symmetry(TreeNode*a, TreeNode*b)
    {
        if(a==NULL || b==NULL)
        {
            return a==b;
        }

        if(a->val != b->val)
        {
            return false;
        }
        return symmetry(a->left,b->right) && symmetry(a->right,b->left);

    }


    bool isSymmetric(TreeNode* root) {
        return root==NULL || symmetry(root->right,root->left);


    }
};
