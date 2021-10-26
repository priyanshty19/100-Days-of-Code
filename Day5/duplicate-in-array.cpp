class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {


        sort(arr,arr+n);
        int temp;
        vector<int> v;

        for(int i=0; i<n; i++)
        {

            if(arr[i]==arr[i+1] &&arr[i]!=temp)
            {
                v.push_back(arr[i]);
                temp=arr[i];
            }

        }

        if(v.size()==0)
        {
            return {-1};
        }
        return v;
    }

};
