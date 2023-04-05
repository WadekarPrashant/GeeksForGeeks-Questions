class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
      unordered_map<int,int>m;
      int y=*max_element(arr.begin(),arr.end());
      for(int i=0;i<N;i++)
      m[arr[i]]++;
      int ans=0;
      sort(arr.begin(),arr.end());
      for(int i=0;i<N;i++)
      { if(m[arr[i]]==0)
      continue;
          if(m[arr[i]]>1)
          ans+=m[arr[i]];
          m[arr[i]]=0;
          for(int j=arr[i]+arr[i];j<=y;j+=arr[i])
          {
              ans+=m[j];
              m[j]=0;
          }
      }
      return ans;
    }
};