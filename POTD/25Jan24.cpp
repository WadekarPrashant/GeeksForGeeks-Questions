class Solution
{
public:
  void SieveOfEratosthenes(int n, vector<bool> &prime)
  {
    for (int p = 2; p * p <= n; p++)
    {
      if (prime[p] == true)
      {
        for (int i = p * p; i <= n; i += p)
          prime[i] = false;
      }
    }
  }
  int solve(int Num1, int Num2)
  {
    vector<bool> prime(10000, 1);
    SieveOfEratosthenes(9999, prime);
    int ans = 0;
    queue<int> q;
    q.push(Num1);
    while (!q.empty())
    {
      int sz = q.size();
      for (int i = 0; i < sz; i++)
      {
        int val = q.front();
        q.pop();
        if (val == Num2)
          return ans;
        string s = to_string(val);
        for (int j = 0; j < 4; j++)
        {
          char c = s[j];
          for (int k = 0; k < 10; k++)
          {
            if (k == 0 && j == 0)
              continue;
            s[j] = '0' + k;
            int temp = stoi(s);
            if (prime[temp])
            {
              q.push(temp);
              prime[temp] = 0;
            }
          }
          s[j] = c;
        }
      }
      ans++;
    }
  }
};
