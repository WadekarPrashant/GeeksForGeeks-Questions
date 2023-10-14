class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    unordered_map<int,int> mp;
    //Function to find the nodes that are common in both BST.
    void fillMap(Node* node)
    {
        if(!node)
            return;
        mp[node->data]++;
        fillMap(node->left);
        fillMap(node->right);
    }
    void reduceMap(Node* node)
    {
        if(!node)
            return;
        mp[node->data]--;
        reduceMap(node->left);
        reduceMap(node->right);
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {
        vector<int> v;
        fillMap(root1);
        reduceMap(root2);
        for(auto it : mp)
        {
            if(it.second==0)
            {
                v.push_back(it.first);
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};