class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {

        long long sum=0;
        long long left_sum=0;

        for(int i=0; i<n; i++)
        {
            sum+=a[i];
        }

        for(int i=0; i<n; i++)
        {
            if(sum-a[i]==left_sum)
            {
                return i+1;
            }
            else
            {
                left_sum+=a[i];
                sum-=a[i];
            }

        }
        return -1;

    }

};
