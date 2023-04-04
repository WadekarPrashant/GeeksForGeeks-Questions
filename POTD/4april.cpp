int minSteps(string &str) {
    int a=0,b=0;
    char prev='c';
    for(auto &x:str){
        if(prev!=x){
            if(x=='a')
            a++;
            else
            b++;
        }
        prev=x;
    }
    return min(a,b)+1;
}