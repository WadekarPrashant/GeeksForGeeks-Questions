class Solution {
  public:
    int candyShop(int n, vector<int> &candies) {
        unordered_map<int,int>ans;
        int i;
        for(i=0;i<candies.size();i++){
            ans[candies[i]]++;
        }
        int k=ans.size();
        int j=0;
        unordered_map<int,int>val;
        int sum=0;
        int mini=INT_MAX;
     
        for(i=0;i<candies.size();i++){
            val[candies[i]]++;
            sum+=candies[i];
           
            if(val.size()==k){
                mini=min(mini,sum);
                while(val.size()==k){
                    val[candies[j]]--;
                    sum-=candies[j];
                    if(val[candies[j]]==0){
                        val.erase(candies[j]);
                    }
                    if(val.size()==k)
                    mini=min(mini,sum);
                    j++;
                }
            }
            
        }
        return mini;
    }
};
