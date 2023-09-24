class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
       vector<int>res;
       int st[n] = {0};
       for(int i = 0;i<n;i++){
           if(st[arr[i]]==0) st[arr[i]] = -1;
           else if(st[arr[i]]==-1) st[arr[i]] =-2;
       }
       for(int i  =0;i<n;i++){
           if(st[i]==-2) res.push_back(i);
       }
       if(res.size()==0) res = {-1};
       return res;
    }
};