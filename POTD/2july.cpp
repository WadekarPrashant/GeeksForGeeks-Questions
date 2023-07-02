class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        if(l==32) l=31;
        if(r==32) r=31;
       int lbm = l>1? y&(~(1<<(l-1))+1):y;
       int rbm = r>1? y&((1<<r)-1):y;
       return (x|(rbm&lbm));
    }
};
