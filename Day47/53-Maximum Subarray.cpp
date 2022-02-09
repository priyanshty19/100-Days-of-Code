class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        long long int maxi=nums[0];
        long long int ans=nums[0];
        for(int i=1; i<nums.size(); i++)
        {

            ans+=nums[i];
            if(ans<nums[i])
            {
                ans=nums[i];
            }
            if(maxi<ans)
            {
                maxi=ans;
            }


        }
        return maxi;

    }
};
