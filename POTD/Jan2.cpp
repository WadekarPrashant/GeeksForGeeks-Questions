class Solution {
  public:
    vector<int> maximumValue(Node* node) {
      //code here
     queue<Node*> q;
        q.push(node);
        vector<int> ans;
        while(!q.empty()){
            int sz = q.size();
            int mx = INT_MIN;
            while(sz--){
              auto node = q.front();
               q.pop();


       if(node -> left != NULL) q.push(node -> left);
       if(node -> right != NULL) q.push(node -> right);
         mx = max(mx, node -> data); 
         }
       ans.push_back(mx);
        }
        return ans;
    }
};