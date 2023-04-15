class Solution {
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        // code here
        unordered_map<int,int> m;
        int ans=-1;
        for(int i=0;i<n;i++){
            if(m.find(arr[i])==m.end()){
                m[arr[i]]++;
                ans++;
            }
            else{
                ans+=time[arr[i]-1];
            }
            
        }
        return ans;
    }
};