class Solution{
private: 
    int height(Node *root, bool &same_level) {
        if(root == NULL) return 0;  
        
        int left = height(root->left, same_level); 
        int right = height(root->right, same_level); 
        
        if(left != 0 && right != 0 && left != right)  
            same_level = false;  
        return max(left, right) + 1; 
    }
public:
    bool check(Node *root)
    {
        if(root == NULL) return true; 
        
        bool same_level = true;  
        height(root, same_level);  
        return same_level; 
    }
};
