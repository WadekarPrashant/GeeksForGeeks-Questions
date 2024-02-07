class Solution {
public:
    Node* LCA(Node* root, int a, int b) {
        if (!root) return NULL;

        if (root->data == a || root->data == b) return root;

        Node* left = LCA(root->left, a, b);
        Node* right = LCA(root->right, a, b);

        if (left != NULL && right != NULL) return root;

        if (!left && !right) return NULL;

        if (!left) return right;
        return left;
    }

    int findDistance(Node* root, int node, int dist) {
        if (!root) return -1;

        if (root->data == node) return dist;

        int left = findDistance(root->left, node, dist + 1);
        if (left != -1) return left;

        return findDistance(root->right, node, dist + 1);
    }

    int findDist(Node* root, int a, int b) {
        Node* lca = LCA(root, a, b);
        int d1 = findDistance(lca, a, 0);
        int d2 = findDistance(lca, b, 0);

        return d1 + d2;
    }
};
