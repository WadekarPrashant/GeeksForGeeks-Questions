class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        int n = arr.size();
        set<vector<int>> s;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++) {
                int l = j+1,r = n-1;
                int sum = arr[i]+arr[j];
                int targetSum = k - sum;
                while(l<r) {
                    if(arr[l]+arr[r] == targetSum)
                    {   vector<int>quad = {arr[i],arr[j],arr[l],arr[r]};
                        s.insert(quad);
                        l++; r--;
                    }
                    else if(arr[l]+arr[r] < targetSum)
                    l++;
                    else
                    r--;
                }
            }
        }
        for(auto x:s)
        ans.push_back(x);
        
        return ans;
    }
};
