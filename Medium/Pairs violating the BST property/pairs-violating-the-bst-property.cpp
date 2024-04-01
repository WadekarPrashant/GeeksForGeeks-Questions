//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// A Tree node
struct Node {
    int data;
    struct Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return (temp);
}

Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User function Template for C++

/*// A Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};*/
class Solution {
  public:
void fun(Node* root, vector<int>& v) {
    if (!root) return;
    fun(root->left, v);
     v.push_back(root->data);
    fun(root->right, v);
}

void merge(vector<int>& v, int l, int mid, int r, int& count) {
    vector<int> ans(r - l + 1);
    int left = l, right = mid + 1, k = 0;
    while (left <= mid && right <= r) {
        if (v[left] <= v[right]) {
            ans[k++] = v[left++];
        } else {
            ans[k++] = v[right++];
            count += (mid - left + 1); // Count inversions
        }
    }
    while (left <= mid) {
        ans[k++] = v[left++];
    }
    while (right <= r) {
        ans[k++] = v[right++];
    }
    for (int i = 0; i < k; i++) {
        v[l + i] = ans[i];
    }
}

void mergeSortAndCount(vector<int>& v, int l, int r, int& count) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        mergeSortAndCount(v, l, mid, count);
        mergeSortAndCount(v, mid + 1, r, count);
        merge(v, l, mid, r, count);
    }
}

int pairsViolatingBST(int n, Node *root) {
    vector<int> v;
    fun(root, v);
    int count = 0;
    mergeSortAndCount(v, 0, n - 1, count);
    return count;
}

};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    getchar();

    while (t--) {

        int n;
        cin >> n;
        getchar();

        string inp;
        getline(cin, inp);

        struct Node* root = buildTree(inp);

        Solution ob;
        int ans = ob.pairsViolatingBST(n, root);
        cout << ans << endl;
    }

    return 0;
}
// } Driver Code Ends