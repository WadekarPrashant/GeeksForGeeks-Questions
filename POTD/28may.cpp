int getNthFromLast(Node *head, int n)
{

       int totalnode=0;
       Node *p = head;
       while(p) {
           p=p->next;
           totalnode++;
       }
       p=head;
       while(p) {
           totalnode--;
           if(totalnode==n-1) {
               return p->data;
           }
           p=p->next;
       }
       return -1;
}
