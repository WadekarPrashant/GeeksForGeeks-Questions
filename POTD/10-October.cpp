class Solution
{
private:
vector<int>ans;
bool f;
int pre,K;

public:
void solve(Node *root,int l){
    if(!root||root->data==pre)return;
    if(l==0){
        ans.push_back(root->data);
        return;
    }
    solve(root->left,l-1);
    solve(root->right,l-1);
}
void search(Node* root,int target){
    if(!root||f)return;
    search(root->left,target);
    search(root->right,target);
    if(root->data==target||f){
        f=true;
        if(K>=0)
        solve(root,K--);
        pre=root->data;
    }
}
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        // return the sorted vector of all nodes at k dist
        ans.clear();
        K=k;
        pre=-1;
        f=false;
        search(root,target);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
