class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
           Node * saheb = head;
           long mode = 1e9+7;
           long long uttar = 0 ;
           while (saheb){
               uttar = (uttar*2 % mode + saheb -> data ) % mode ;
               saheb = saheb-> next;
           }
           return uttar;
        }
};
