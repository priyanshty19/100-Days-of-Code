class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        stack<int> v;
        for(int i=0; i<sizeOfStack/2; i++)
        {
            v.push(s.top());
            s.pop();
        }
        s.pop();
        for(int i=(sizeOfStack/2) + 1; i<sizeOfStack; i++)
        {
            v.push(s.top());
            s.pop();
        }
        for(int i=0; i<sizeOfStack-1; i++)
        {
            s.push(v.top());
            v.pop();
        }
    }
};

