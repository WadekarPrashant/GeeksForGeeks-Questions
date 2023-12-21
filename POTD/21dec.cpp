class Solution {
  public:
    int minCandy(int n, vector<int> &ratings) {
        // code here
        vector<int>a(n,1);
        int ans=0;
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                a[i]=a[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]&&a[i]<=a[i+1]){
                a[i]=a[i+1]+1;
            }
        }
        for(int i=0;i<n;i++) ans+=a[i];
        return ans;
        
    }
};
