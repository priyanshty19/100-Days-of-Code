
class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        if(node==NULL)
        {
            return;
        }
        mirror(node->right);
        mirror(node->left);

        swap(node->left,node->right);

    }
};
