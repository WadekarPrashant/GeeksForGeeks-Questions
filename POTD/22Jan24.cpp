class Solution
{
    private:
    int pathSum = 0;
    vector<vector<int>> answer;
    vector<int> path;
    void traverse(Node* root, int sum) {
        
        if(root == NULL) return;
        
        pathSum += root->key;
        path.push_back(root->key);
        if(sum == pathSum) answer.push_back(path);
        
        traverse(root->left,sum);
        
        traverse(root->right,sum);
        
        pathSum -= *(path.rbegin());
        path.pop_back();
    }
   
    public:
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        traverse(root,sum);
        return answer;
    }
};
