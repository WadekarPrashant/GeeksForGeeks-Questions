class Solution {
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k) {
	    unordered_map<int, int> mp;
	    mp[0] = -1;
	    
	    int maxi = 0, sum = 0, rem = 0;
	    for(int i = 0; i < n; i++) {
	        sum += arr[i];
	        rem = sum % k;
	        
	        if(rem < 0)
	            rem += k;
	            
	        if(mp.count(rem)) {
	            maxi = max(maxi, i - mp[rem]);
	            continue;
	        }
	        
	        mp[rem] = i;
	    }
	    
	    return maxi;
	}
};
