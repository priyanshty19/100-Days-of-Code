class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> v_x;
        vector<int> v_y;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j]==0)
                {
                    v_x.push_back(i);
                    v_y.push_back(j);
                }
            }
        }

        for(int i=0; i<v_x.size(); i++)
        {
            for(int j=0; j<m; j++)
            {
                matrix[v_x[i]][j]=0;
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<v_y.size(); j++)
            {
                matrix[i][v_y[j]]=0;
            }
        }

    }
};
