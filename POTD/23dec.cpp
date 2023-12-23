class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int N, int k) {
        int n = N/k; // is n se jyada occurence wale ka count return karna hai
        vector<int>Arr;
        for(int i=0; i<N; i++){
            Arr.push_back(arr[i]);
        }
        //Now sorting the vector
        sort(Arr.begin(), Arr.end());
      
        int ans = 0;
        int count = 1;
        for(int i = 0; i<N-1; i++){
            if(Arr[i] == Arr[i+1]){
                count++;
                
            }
            else{
                
                if(count > n){
                    ans++;
                    
                }
                count = 1;
            }
            
        }
        if(count > n) ans++;
        return ans;
    }
};
