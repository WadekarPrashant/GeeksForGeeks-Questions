class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &a) {
        int five=0,ten=0;
        
        for(int i=0;i<n;i++){
            if(a[i]==5) five++;
            else if(a[i]==10){
                ten++;
                if(five==0) return 0;
                else five--;
            }
            else{
                if(five==0 || (ten*10+five*5 < 15)) return 0;
                else{
                    if(ten>0) {
                        ten--; five--;
                    }
                    else five-=3;
                }
            }
        }
        return 1;
    }
};
