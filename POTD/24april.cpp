class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        // codee here
        int n=arr.size();
        vector<int> ans(n,-1);
        stack<int>st;
        st.push(-1);
        for(int i=0;i<n;i++){
            while(st.top()!=-1 && arr[i]<=arr[st.top()]){
                st.pop();
            }
            ans[i] = (st.top()==-1 ? -1 : st.top());
            st.push(i);
        }
        while(st.top()!=-1){
            st.pop();
        }
        st.push(n-1);
        for(int i=n-2;i>-1;i--){
            int temp;
            while(st.top()!=-1 && arr[i]<=arr[st.top()]){
                st.pop();
            }
            temp = st.top();
            if(i==0){ ans[i]=temp; break;}
            else if(ans[i]==-1) ans[i]=temp;
            else if((temp!=-1 && abs(i-ans[i])>abs(i-temp)) || ( temp!=-1 && abs(i-ans[i])==abs(i-temp) && arr[ans[i]]>arr[temp])){
                ans[i]=temp;
            }
            st.push(i);
        }
      return ans; 
    }
};
