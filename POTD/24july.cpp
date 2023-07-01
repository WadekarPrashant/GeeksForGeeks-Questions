class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            bool l = 1;
            for(int j = 0;j<k;j++)if(arr[i][j]!=str[j])l = 0;
            if(l)ans++;
        }
        return ans;
    


    }
};
