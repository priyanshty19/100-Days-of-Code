void sum(vector<pair<int,int>>v)
{
    long long sum=0;
    int n=v.size();
    for(int i=0; i<n; i++)
    {
        sum+=v[i].second;
    }
    cout<<sum;
    cout<<endl;
}
