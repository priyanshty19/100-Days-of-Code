int transitionPoint(int arr[], int n) {
    int point=0;


    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            point=i;
            break;
        }
        else
        {
            point=-1;
        }

    }
    return point;

}
