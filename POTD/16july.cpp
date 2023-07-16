class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        stack<int>s;
        while(!q.empty()){
            s.push(q.front());
            q.pop();
        }
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        return q;
    }
};
