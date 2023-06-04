class Solution
{
  string getString(char x)
{
    string s(1, x);
 
    return s;  
}
  public:
    string reverseEqn (string s)
        {
            stack<string> st;
            string s1="";
            for(int i=0;i<s.length();i++)
            {
            char c=s[i];
            if(c>='0' && c<='9')
            s1+=c;
            else
            {
                st.push(s1);
                st.push(getString(c));
                s1="";
            }
        }
        st.push(s1);
        s1="";
        while(!st.empty())
        s1+=st.top(),st.pop();
        return s1;
          
        }
};
