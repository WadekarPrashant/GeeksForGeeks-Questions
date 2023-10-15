class Solution{
    
    void f1(Node *root, vector<Node *> &inorder){
        if(root == NULL) return;
        f1(root -> left, inorder);
        inorder.push_back(root);
        f1(root -> right, inorder);
        return;
    }
    Node *f2(int s, int e, vector<Node *> &inorder){
        if(s > e){
            return NULL;
        }
        int mid = (s + e) / 2;
        Node *root = inorder[mid];
        root -> left = f2(s, mid - 1, inorder);
        root -> right = f2(mid + 1, e, inorder);
        return root;
    }
    public:
    // Your are required to complete this function
    // function should return root of the modified BST
    Node* buildBalancedTree(Node* root)
    {
        // Code here
        vector<Node *> inorder;
        f1(root, inorder);
        return f2(0, inorder.size() - 1, inorder);
    }
};
