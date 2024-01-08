class Solution
{
    public:
    Node* reverse(Node*head){
        Node*prev=NULL;
        while(head){
            Node*next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        Node* a=reverse(node1);
        Node*b=reverse(node2);
        Node* res=newNode(-1);
        Node* ans=res;
        while(a and b){
            if(a->data>b->data){
                res->next=newNode(a->data);
                a=a->next;
                res=res->next;
            }
            else{
                res->next=newNode(b->data);
                b=b->next;
                res=res->next;
            }
        }
        while(a){
            res->next=newNode(a->data);
            a=a->next;
            res=res->next;
        }
        while(b){
            res->next=newNode(b->data);
            b=b->next;
            res=res->next;
        }
        return ans->next;
    }  
};
