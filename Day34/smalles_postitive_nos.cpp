        int a[n+1]={0};

        int x=n+1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>=0)
            {
                a[arr[i]]++;
            }
            else
            {
                continue;
            }

        }

        for(int i=0; i<n; i++)
        {
            if(a[i]!=i)
            {
                x=i;
            }
        }

        return x;
