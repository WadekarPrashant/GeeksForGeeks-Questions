class Solution{
public:
    int findWinner(int n, int arr[]){
        // code here
      
        int ans=arr[0];
        for(int i=1;i<n;i++)
        {
            
            ans^=arr[i];  
        }
        if(ans==0)
          return 1;
        if(n%2==0)
          return 1;
        else
          return 2;
    }
};
