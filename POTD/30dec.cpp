class Solution{
  public:
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string, int> voteCount;  
        string winnerName = arr[0]; 
        int maxVotes = 1;
        for (int i = 0; i < n; ++i) {
            voteCount[arr[i]]++;
            if (voteCount[arr[i]] > maxVotes || (voteCount[arr[i]] == maxVotes && arr[i] < winnerName)) {
                winnerName = arr[i];
                maxVotes = voteCount[arr[i]];
            }
        }
        return {winnerName, to_string(maxVotes)};
    }
};
