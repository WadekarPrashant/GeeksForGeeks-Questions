class Solution {
public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        pre = NULL;
        suc = NULL;
        Node* temp = root;
        while (temp != NULL) {
            if (temp->key > key) {
                suc = temp;
                temp = temp->left;
            }
            else {
                temp = temp->right;
            }
        }
        Node* tip = root;
        while (tip != NULL) {
            if (tip->key < key) {
                pre = tip;
                tip = tip->right;
            }
            else {
                tip = tip->left;
            }
        }
    }
};
