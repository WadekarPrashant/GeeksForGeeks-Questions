class Solution 
{
    public:
    static bool comp(Job a,Job b){
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        int count = 0,profit = 0;
        sort(arr,arr+n,comp);
        int slot[n+1] = {0};
        for(int i=0;i<n;i++){
            int deadline = arr[i].dead;
            while(deadline>=1 && slot[deadline]!=0){
                deadline--;
            }
            if(deadline!=0){
                slot[deadline] = 1;
                count++;
                profit += arr[i].profit;
            }
        }
        vector<int> ans({count,profit});
        return ans;
    } 
};