class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int l=temperatures.size();
        vector<int> v(l,0);


        stack<int> st;

        for(int i=0; i<l; i++)
        {

            while(!st.empty() && temperatures[i]>temperatures[st.top()])
            {
                int k=st.top();
                st.pop();
                v[k]=i-k;
            }
            st.push(i);
        }

        return v;
    }
};
