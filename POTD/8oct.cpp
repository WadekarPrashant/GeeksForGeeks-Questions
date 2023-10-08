class Solution {
public:
    Node* sortedInsert(Node* head, int val) {
        Node* temp = head;
        if (temp->data >= val) {
            Node* add = new Node(val);
            add->next = head;
            return add;
        }
        else {
            Node* temp1 = head;
            bool flag = true;
            while (true) {
                if (temp1->next == nullptr) {
                    break;
                }
                if (temp1->next != nullptr && temp1->data <= val && temp1->next->data > val) {
                    Node* put = new Node(val);
                    Node* rakh = temp1->next;
                    temp1->next = put;
                    put->next = rakh;
                    flag = false;
                    break;
                }
                temp1 = temp1->next;
            }
            if (flag == false) {
                return head;
            }
            Node* fuck = new Node(val);
            temp1->next = fuck;
            return head;
        }
    }
};
