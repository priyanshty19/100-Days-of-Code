vector<int> rotateLeft(int d, vector<int> arr) {



    int n=arr.size();
    vector<int> temp(n);

    for(int i=0; i<n; i++)
    {
        temp[(n-d+i)%n]=arr[i];
    }

    return temp;

}
