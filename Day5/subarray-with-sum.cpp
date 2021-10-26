class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long sum=0;
        long long i=0;
        long long j=0;

        while(i<n && j<=n)
        {
            if(sum<s)
            {
                sum+=arr[j];
                j++;
            }
            else if(sum>s)
            {
                sum-=arr[i];
                i++;
            }
            else if(sum==s)
            {
                return {i+1,j};
                break;
            }
        }
        return {-1};
    }
};
