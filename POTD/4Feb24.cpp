class Solution {
public:
Node*solve(Node*a,Node*b){
    int carry=0;
    Node*temp=new Node(0);
    Node*curr=temp;
    while(a || b){
        int x = (a==nullptr)? 0 : a->data;
        int y = (b==nullptr)? 0 : b->data;
        if(carry==1){
            x=x-1;
            carry=0;
        }
        if(x-y>=0){
            curr->next = new Node(x-y);
            curr = curr->next;
        }else{
            curr->next = new Node(10+x-y);
            curr = curr->next;
            carry=1;
        }
        a=(a==nullptr)?a:a->next;
        b=(b==nullptr)?b:b->next;
    }
    if(carry)return nullptr;
    return temp->next;
}
Node* reverse(Node*head){
    Node*prev=nullptr;
    Node*temp=head;
    Node*curr;
    while(temp){
        curr=temp->next;
        temp->next=prev;
        prev=temp;
        temp=curr;
    }
    return prev;
}
    Node* subLinkedList(Node* head1, Node* head2) {
         while(head1 && head1->data==0){
            head1=head1->next;
        }
        while(head2 && head2->data==0){
            head2=head2->next;
        }
        if(head1==nullptr && head2==nullptr){
            return new Node(0);
        }
        if(head1==nullptr)return head2;
        if(head2==nullptr)return head1;
        head1=reverse(head1);
        head2=reverse(head2);
        Node*a=head1;
        Node*b=head2;
        
        if(solve(head1,head2)!=nullptr){
            Node*ans=reverse(solve(head1,head2));
             while(ans && ans->data==0){
            ans=ans->next;
            }
            if(ans==nullptr)  return new Node(0);
            return ans;
            
        }
        if(solve(b,a)!=nullptr){
            Node*ans=reverse(solve(b,a));
             while(ans && ans->data==0){
            ans=ans->next;
            }
            if(ans==nullptr)  return new Node(0);
            return ans;
        }
        
    }
};
