#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int  sum_arr(int arr[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()

{


    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,y;
        cin>>n>>x>>y;
        int arr[n];
        for(long long int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if((sum_arr(arr,n)+x+y)%2==0)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
    }


    return 0;

}
