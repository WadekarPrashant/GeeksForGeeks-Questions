class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        long long int su1 = 0, su2 = 0, su3 = 0;
        su1 = accumulate(S1.begin(), S1.end(), 0);
        su2 = accumulate(S2.begin(), S2.end(), 0);
        su3 = accumulate(S3.begin(), S3.end(), 0);
        
        if(su1 == su2 && su2 == su3)
            return su1;
        
        int i = 0, j = 0, k = 0;
        while(i<N1 && j<N2 && k<N3){
            if(su1 == su2 && su2 == su3)
                return su1;
            
            else if(su1 > su2 || su1 > su3){
                su1 -= S1[i];
                i++;
            }
            
            else if(su2 > su1 || su2 > su3){
                su2 -= S2[j];
                j++;
            }
            
            else if(su3 > su2 || su3 > su1){
                su3 -= S3[k];
                k++;
            }
        }
        
        return 0;
    }
};
