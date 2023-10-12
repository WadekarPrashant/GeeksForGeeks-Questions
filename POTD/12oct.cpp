class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    void inorder(Node* root, vector<int>& v) {
        if (root == nullptr) {
            return;
        }
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }

    void solve(Node* root, vector<vector<int>>& ans) {
        if (root == nullptr) {
            return;
        }
        vector<int> v;
        inorder(root, v);
        if (v.size() > 1) {
            ans.push_back(v);
        }
        solve(root->left, ans);
        solve(root->right, ans);
    }
    int dupSub(Node *root) {
         vector<vector<int>>v;
         solve(root,v);
         for(int i=0;i<v.size()-1;i++){
             for(int j=i+1;j<v.size();j++){
                 if(v[i]==v[j])return 1;
             }
         }
         return 0;
    }
};
