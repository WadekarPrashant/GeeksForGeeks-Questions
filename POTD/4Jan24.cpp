class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        sort(arr,arr+N);
        for(int i=0;i<N-2;){
            if(arr[i]!=arr[i+2]){
                return arr[i];
                // continue;
            }
            i=i+3;
        }
        return arr[N-1];
    }
};
