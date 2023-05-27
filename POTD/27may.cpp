struct Node* _Middle(struct Node *head)
{
    struct Node *slow_ptr = head;
    struct Node *fast_ptr = head;
    struct Node * temp = head;
 
    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            temp = slow_ptr;
            slow_ptr = slow_ptr->next;
           
        }
        temp->next = NULL;
        return slow_ptr;
        
    }
    return NULL;
}
 
struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *start = head;
        
        start = start->next;
        head->next = NULL;
        
        while(start != NULL)
        {
            Node* previous = start;
            start = start->next;
            previous->next = head;
            head = previous;
        }
        
        return head;
    }
 
 
class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        //mid nikala.
        struct Node* middle  = _Middle(head);
        
        //right mid reverse kiya
        middle = reverseList(middle);
        
        
        //subract + update value;
        struct Node* l = head;
        struct Node* r = middle;
        struct Node* temp = head;
        
        while(l != NULL)
        {
            int em = l->data;
            l->data = r->data - l->data;
            r->data = em;
            l = l->next;
            r=r->next;
            
            if(l != NULL)
            {
                temp  = l;
            }
        }
        
        
        middle = reverseList(middle);
        temp->next = middle;
        
        return head;
        
        
    }
};
