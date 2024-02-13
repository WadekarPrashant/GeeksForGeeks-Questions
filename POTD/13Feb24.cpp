class Solution {
public:
    Node* cloneGraph(Node* src) 
    {
        queue<Node*> q; 
        map<Node*,Node*> clone;
        
        clone[src] = new Node(src->val);
        q.push(src);
        
        Node *temp1;
        vector<Node*> temp2; 
        
        while(!q.empty())
        {
            temp1 = q.front();
            q.pop();
            temp2 = temp1->neighbors;
            
            for(int i = 0; i < temp2.size();i++)
            {
                if(!clone[temp2[i]])
                {
                    clone[temp2[i]] = new Node(temp2[i]->val);
                    q.push(temp2[i]);
                }
                clone[temp1]->neighbors.push_back(clone[temp2[i]]); // Important step 
            }
        }
        return clone[src];
    }
};
