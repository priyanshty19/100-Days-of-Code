    int x=-1;

    map<int, int> mp;

    for(int i=0; i<n; i++)
    {
        mp[arr[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        if(mp[arr[i]]>1)
        {
            x=i+1;
        }
    }
    return x;
