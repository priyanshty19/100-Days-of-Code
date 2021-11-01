vector<int> rotLeft(vector<int> a, int d) {
    int n=a.size();
    vector<int> temp(n);

    for(int i=0; i<n; i++)
    {
        temp[(n+i-d)%n]=a[i];
    }
    return temp;

}
