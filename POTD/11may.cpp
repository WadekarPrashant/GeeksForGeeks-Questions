class Solution {
  public:
    int minimumSum(string s) {
        int N = s.size();
        int ans = 1e9;
        for (int i = 0; i < (N / 2); i++) {
            if (s[i] != s[N - i - 1]) {
                if (s[i] == '?' || s[N - i - 1] == '?') {
                    if (s[i] != '?') {
                        s[N - i - 1] = s[i];
                    } else {
                        s[i] = s[N - i - 1];
                    }
                } else {
                    ans = -1;
                    break;
                }
            }
        }
        if (ans == -1) return ans;
        int idx = N - 1, prev = -1, cur = -1;
        for (int i = 0; i < (N / 2);) {
            if (s[i] == '?') {
                while (i < (N / 2) && s[i] == '?') {
                    i++;
                    cur = i;
                }
                if (prev == -1 and cur == N / 2) {
                    for (int j = 0; j < N / 2; j++) s[j] = 'a';
                    if (N & 1) s[N / 2] = 'a';
                } else if (prev != -1 and cur == N / 2) {
                    for (int j = prev + 1; j < cur; j++) s[j] = s[prev];
                    if (N & 1) s[N / 2] = s[prev];
                } else if (prev == -1 and cur != N / 2) {
                    for (int j = 0; j < cur; j++) s[j] = s[cur];
                } else {
                    int dis = abs((s[cur] - 'a') - (s[prev] - 'a'));
                    char prevChar = s[prev], curChar = s[cur];
                    if (prevChar > curChar) swap(prevChar, curChar);
                    char ch;
                    if (dis == 0 || dis == 1)
                        ch = s[cur];
                    else {
                        dis /= 2;
                        ch = (char)((prevChar - 'a') + dis + 'a');
                    }
                    for (int j = prev + 1; j < cur; j++) s[j] = ch;
                }
            } else {
                prev = i;
                i++;
            }
        }
        for (int i = 0; i < (N / 2); i++) s[N - i - 1] = s[i];

        int sum = 0;
        for (int i = 1; i < N; i++) {
            sum += abs(s[i] - s[i - 1]);
        }
        return sum;
    }
};
