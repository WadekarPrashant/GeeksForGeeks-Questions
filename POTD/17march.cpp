long long int no_of_subarrays(int n, vector<int> &arr) {
    long long ans=0, count=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
        else{
            ans+= ((count*(count+1)))/2;
            count=0;
        }
    }
    if(count>0) ans+=(count*(count+1))/2;
    return ans;
    
}