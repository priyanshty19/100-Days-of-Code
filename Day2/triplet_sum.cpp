class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    {
        sort(arr,arr+n);

        for (int i=0; i<n; i++)
        {
            int j=i+1, k=n-1;
            while(j<k)
            {
                int s=arr[i]+arr[j]+arr[k];
                if(s<0)
                {
                    j++;
                }
                else if(s>0)
                {
                    k--;
                }
            }
        }
    }
};
