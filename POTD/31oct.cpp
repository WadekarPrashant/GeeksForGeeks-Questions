class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {


               vector<int>v;
     
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0){
                arr[j]=arr[i];
                j++;
                
            }
            else{
                v.push_back(arr[i]);
            }
        }
        for(int i=0;i<v.size();i++){
            arr[j++]=v[i];
            
        }
           
    }
};
