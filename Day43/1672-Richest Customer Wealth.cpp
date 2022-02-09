class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {


        int m=accounts.size();
        int n=accounts[0].size();
        int mx=0;
        // cout<<accounts[0].size()<<endl;
        for(int i=0; i<m; i++)
        {
            int sum=0;
            for(int j=0; j<n; j++)
            {

                sum+=accounts[i][j];
                mx=max(mx,sum);
            }
        }

        return mx;

    }
};
