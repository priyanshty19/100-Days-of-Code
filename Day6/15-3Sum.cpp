class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> temp;

        for(int i=0; i<n; i++)
        {
            int j=n-1;
            int k=i+1;
            while(k<j)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0)
                {
                    j--;
                }
                else if(sum==0)
                {
                    temp.insert({nums[i],nums[j],nums[k]});
                    k++;
                    j--;

                }
                else
                {
                    k++;
                }
            }
        }

        vector<vector<int>> v1;
        for (auto i=temp.begin(); i!=temp.end(); i++)
        {
            v1.push_back(*i);
        }
        return v1;

    }
};
