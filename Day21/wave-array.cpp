class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr, int n){

        if(n%2!=0)
        {
            int last=arr[n-1];
            for(int i=0; i<n; i++)
            {
                if(i%2==0)
                {
                    swap(arr[i],arr[i+1]);
                }
            }
            arr[n-1]=last;
        }
        else
        {
           for(int i=0; i<n; i++)
            {
                if(i%2==0)
                {
                    swap(arr[i],arr[i+1]);
                }
            }
        }

    }
};
