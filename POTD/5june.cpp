class Solution
{    private:
     void Find(Node* root, int K,int &dif){
         if(root == NULL) return ;
         if(root->data == K){
             dif = 0 ;}
         
        dif = min(dif,abs(K-root->data));
        Find(root->left,K,dif);
        Find(root->right,K,dif);
        }
    public:
    
    int minDiff(Node *root, int K)
    {
        int  dif  =INT_MAX;
        Find(root,K,dif);
        return  dif;
    }
};
