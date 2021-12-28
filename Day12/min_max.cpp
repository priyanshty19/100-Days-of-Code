pair<long long, long long> getMinMax(long long a[], int n) {

    long long int min=a[0];
    long long int max=a[0];

    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return make_pair(min,max);

}
