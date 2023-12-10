class Solution{
    public:
bool subArrayExists(int arr[], int n)
    {
        map<int, bool> m;
        
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            
            if(m.find(sum)!=m.end()) return true;
            
            m[sum] = 1;
        }
        
        if(m.find(0)==m.end()) return false;
        return true;
    }
};
