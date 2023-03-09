class Solution {
  public:
    bool checkAnagram(int A[], int B[]) {
        for (int i = 0; i < 26; i++) {
            if (A[i] != B[i]) return false;
        }
        return true;
    }

    void checkAndPush(bool isAnagram, int len, struct Node **ptr1,
                      struct Node **ptr2, vector<struct Node *> &res,
                      int freq[]) {
        if (!isAnagram) return;
        struct Node *prev = NULL;

        res.push_back(*ptr1);
        struct Node *temp = *ptr2;
        *ptr2 = (*ptr2)->next;
        if (temp) temp->next = NULL;
        *ptr1 = *ptr2;
        for (int i = 0; i < 26; i++) freq[i] = 0;
        for (int i = 0; i < len && (*ptr2); i++) {
            freq[(*ptr2)->data - 'a']++;
            prev = (*ptr2);
            if (*ptr2) *ptr2 = (*ptr2)->next;
        }

        (*ptr2) = prev;
    }
    vector<Node *> findAnagrams(struct Node *head, string s) {
        // code here

        int len = s.length();
        int freq[26] = {};
        for (char ch : s) {
            freq[ch - 'a']++;
        }
        int freq1[26] = {};
        struct Node *ptr1 = head;
        struct Node *ptr2 = head;
        struct Node *prev = NULL;
        for (int i = 0; i < len && (ptr2); i++) {
            freq1[ptr2->data - 'a']++;
            prev = ptr2;
            ptr2 = ptr2->next;
        }
        ptr2 = prev;

        vector<struct Node *> res;

        while (ptr2->next) {
            bool ok = checkAnagram(freq1, freq);
            if (ok) {
                checkAndPush(ok, len, &ptr1, &ptr2, res, freq1);
            } else {
                freq1[ptr1->data - 'a']--;
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
                freq1[ptr2->data - 'a']++;
            }
        }

        bool ok = checkAnagram(freq1, freq);
        if (ok) {
            res.push_back(ptr1);
        }

        return res;
    }
};