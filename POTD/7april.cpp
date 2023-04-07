class Solution{   
public:
    int addMinChar(string str){    
        //code here
        int n = str.size();
        int left=0 , right=n-1;
        while(left<right){
            if(str[left]==str[right]){
                int x= left;
                int y= right;
                while(x<y && str[x]==str[y]){
                    x++;
                    y--;
                }
                if(x>=y){
                    left = x;
                    right = y;
                }
                else{
                    right--;
                }
            }
            else{
                right--;
            }
        }
        int x = n-1-right;
        int y = left;
        return x-y;
    }
};