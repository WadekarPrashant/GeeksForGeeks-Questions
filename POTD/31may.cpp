class Solution{
public:
int LargButMinFreq(int arr[], int n) {
        // code here
        map<int,int>mp;
        for(int i = 0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int maxi = INT_MIN;
        int miniFreq = INT_MAX;
        for(auto i:mp)
        {
            if(miniFreq>=i.second)
            {
                maxi = max(maxi,i.first);
                miniFreq = i.second;
            }
        }
        return maxi;
    } 
};
