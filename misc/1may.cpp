class Solution{
public:
    map<string,int> hmap;
    string recurse(Node *node){
        string p=to_string(node->data)+"#";
        for(auto child:node->children){
            p+=recurse(child);
        }
        hmap[p]++;
        return p;
    }
    int duplicateSubtreeNaryTree(Node *root){
        vector<int> res;
        recurse(root);
        int ans=0;
        for(auto x:hmap){
            if(x.second>1) ans++;
        }
        return ans;
    }
};
