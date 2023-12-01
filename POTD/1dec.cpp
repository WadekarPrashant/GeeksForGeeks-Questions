class Solution {
public:
    bool isDeadEndUtil(Node* root, int min, int max) {
        if (root == nullptr)
            return false;
        if (root->left == nullptr && root->right == nullptr) {
            if (min == max || (root->data == 1 && min == 1))
                return true;
        }
        return isDeadEndUtil(root->left, min, root->data - 1) || isDeadEndUtil(root->right, root->data + 1, max);
    }

    bool isDeadEnd(Node* root) {
        if (root == nullptr)
            return false;
        int min = 1; 
        int max = INT_MAX;
        return isDeadEndUtil(root, min, max);
    }
};
