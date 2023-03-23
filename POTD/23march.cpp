class Solution{
public:
    
    Node* fun(Node *root , int t)
    {
        if(root==NULL)return NULL;

        int val = root->data;
        
        if(val==t)return root;
        
        if(t> val)fun(root->right, t);
        else
            fun(root->left, t);
        
    }
    
    int fun2(Node* root, int t)
    {
        if(root==NULL)return 0;
        
        int val = root->data;
        
        if(val==t)return t;
        
        if(t> val) return val +   fun2(root->right, t);
        else
           return  val + fun2(root->left, t);
        
    }
    
    int fun3(Node* root, int store)
    {
        if(root->left==NULL and root->right==NULL) return store- root->data;
        
        
        int a = INT_MIN;
        int b= INT_MIN;
        
        if(root->left!=NULL) a=  fun3(root->left,  store- root->data  );
        
        if(root->right!=NULL) b= fun3(root->right, store- root->data);
        
        return max(a, b);
    }
    
    int maxDifferenceBST(Node *root,int target){
        // Code here
        
        //return the node of target
        Node* val = fun(root, target);
        
        if(val==NULL)return -1;
        
        //returns the sum till target
        int store= fun2(root, target);
        
        // returns the maxdiff possible        
        return fun3(val, store);
        
    }
};