//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    unordered_map<char,vector<char>> adj;
  
    string findOrder(string dict[], int n, int k) {
        string ans;
        for(int i=0;i<n-1;i++){
            string s1 = dict[i];
            string s2 = dict[i+1];
            int l = min(s1.length(),s2.length());
            int j = 0;
            while(j < l){
                if(s1[j] != s2[j]){
                    adj[s1[j]].push_back(s2[j]);
                    break;
                }
                j++;
            }
        }
        
        unordered_map<char,int> indegree;
        for(auto i:adj){
            indegree[i.first] += 0;
            for(auto j:i.second){
                indegree[j]++;
            }
        }
        
        unordered_map<char,bool> visited;
        
        while(k--){
            vector<pair<int,char>> p;
            for(auto i:indegree){
                if(visited[i.first] == false){
                    p.push_back({i.second,i.first});
                }
            }
            sort(p.begin(),p.end());
            if(p.size() > 0){
                char ch = p[0].second;
                ans.push_back(ch);
                for(auto j:adj[ch]){
                    indegree[j]--;
                }
                visited[ch] = true;
            }
        }
        return ans;
        
        
    }
};

//{ Driver Code Starts.
string order;

bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size())
        return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++)
            cin >> dict[i];

        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++)
            order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i])
                f = false;

        if (f)
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends