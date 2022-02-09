class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n=nums.size();
        vector<int> arr(n);
        int x=0;
        for(int i=0; i<n; i++)
        {
            arr[nums[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]>1)
            {
                x=i;
            }
        }

        return x;
    }
};
