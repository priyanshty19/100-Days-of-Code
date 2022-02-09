class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {


        int n=nums.size();
        vector<int> v;
        unordered_map<int, int> counter;
        for(int i=0; i<n; i++)
        {
            counter[nums[i]]++;
        }
        for(auto i=counter.begin(); i!=counter.end(); i++)
        {
            if(i->second>floor(n/3))
            {
                v.push_back(i->first);
            }
        }
        return v;








    }
};
