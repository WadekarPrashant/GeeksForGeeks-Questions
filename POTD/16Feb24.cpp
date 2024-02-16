class Solution {
    public:
    vector<Node*> flattened;
    bool yes = 0;
    
    void doit(Node* root) {
        if (!root) return;
        
        doit(root->left);
        if(yes) flattened.back()->right = root;
        
        root->left = NULL;
        flattened.push_back(root);
        yes = 1;
        
        doit(root->right);
    }
    
    Node *flattenBST(Node *root) {
        doit(root);
        
        return flattened[0];
    }
};
