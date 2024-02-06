class Solution
{
    public:
    set<Node*> ans;
    void find(Node* root, int level, vector<Node*> v, int k){
        if(!root) return;
        
        v.push_back(root);
        if(!root->left and !root->right){
            int dist = level - k;
            if(dist >= 0)
                ans.insert(v[dist]);
            return;
        }
        
        find(root->left, level+1, v, k);
        find(root->right, level+1, v, k);
    }
    
    int printKDistantfromLeaf(Node* root, int k)
    {
         vector<Node*> v;
         find(root, 0, v, k);
         return ans.size();
    }
};
