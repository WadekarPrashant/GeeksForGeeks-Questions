class Solution{
public:
    int goodSubtrees(Node *root,int k){
        unordered_set<int> s;
        return DFS(root, k, s);
    }
    int DFS(Node* root, int k, unordered_set<int>&s){
        if(!root) return 0;
        unordered_set<int> s1, s2;
        int lt = DFS(root->left, k, s1);
        int rt = DFS(root->right, k, s2);
        s = s1;
        s.insert(s2.begin(), s2.end());
        s.insert(root->data);
        if(s.size() > k) return lt+rt;
        else return lt+rt+1;
    }
};
