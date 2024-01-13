class Solution
{
public:
    Node* insertionSort(struct Node* head)
    {
        vector<int> v;
        Node *p = head;
        
        while(p) 
        {
            v.push_back(p->data);
            p = p->next;
        }
        
        for(int i = 1; i < v.size(); i++) 
        {
            int temp = v[i], j = i - 1;
            
            while(j >= 0 and v[j] > temp) 
            {
                v[j + 1] = v[j];
                j--;
            }
          
            v[j + 1] = temp;
        }
        
        Node *dummy = new Node(0);
        p = dummy;
        
        for(auto i: v) 
        {
            p->next = new Node(i);
            p = p->next;
        }
        
        return dummy->next;
    }
};
