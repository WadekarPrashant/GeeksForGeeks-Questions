class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        
        auto size = nums.size();
        
        if (size % 2 == 1) return false;
        
        int arr[100001] = {0};
        
        for (auto& val : nums)
        {
            int remainder = val % k;

            int remainderComp = k - remainder;
    
            if (arr[remainderComp] > 0)
            {
                arr[remainderComp]--;
            }
            else
            {
                arr[remainder]++;
            }
    
        }
        
        for (int i = 1; i <= 100001; i++ )
        {
            if (arr[i] > 0) return false;
        }
        
        return true;
    }
};
