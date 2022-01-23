#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[6][6];
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            cin>>arr[i][j];
        }
    }

    int max;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            int sum = 0;
            sum += arr[i][j];
            sum += arr[i][j+1];
            sum += arr[i][j+2];
            sum += arr[i+1][j+1];
            sum += arr[i+2][j];
            sum += arr[i+2][j+1];
            sum += arr[i+2][j+2];
            if(sum>max || (i==0 && j==0))
            {
                max=sum;
            }

        }
    }

    cout<<max;


    return 0;
}
