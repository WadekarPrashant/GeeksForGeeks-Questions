class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        //add code here
        Node * ans;
        Node * temp=NULL;
        Node *prev;
        int i=1;
        while(odd->next!=NULL)
        {
            if(i%2==0)
            {
                prev->next=odd->next;
                Node*temp2= new Node(odd->data);
                temp2->next=temp;
                temp=temp2;
            }
            prev=odd;
            odd=odd->next;
            i++;
        }
        odd->next=temp;
    }
};
