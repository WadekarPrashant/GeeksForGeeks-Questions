class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        vector<int> vec;
        unordered_map<int,int> mp;
        for(auto it= head1; it; it= it->next){
            if(!mp[it->data])vec.push_back(it->data);
            mp[it->data]++;
        }
        for(auto it = head2;it; it= it->next){
            if(!mp[it->data]) vec.push_back(it->data);
            mp[it->data]++;
        }
        sort(begin(vec), end(vec));
        Node* head= new Node(vec[0]);
        Node* tail= head;
        for(int i=1;i< vec.size();i++){
            Node* newnode= new Node(vec[i]);
            tail->next= newnode;
            tail= newnode;
        }
        return head;
    }
};
