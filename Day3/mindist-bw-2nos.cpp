class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {

        int min_dist=INT_MAX;
        int idx=-1;
        int idy=-1;


        for(int i=0; i<n; i++)
        {
            if(a[i]==x || a[i]==y)
            {
                if(a[i]==x)
                {
                    idx=i;
                }
                if(a[i]==y)
                {
                    idy=i;
                }

            }
            if(idx!=-1 && idy!=-1)
            {
                min_dist=min(min_dist, abs(idy-idx));
            }


        }
        if(idx==-1 || idy==-1)
        {
            return -1;
        }

        return min_dist;

    }
};
