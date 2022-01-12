#include<iostream>
#include <algorithm>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int max=0;
        int min=0;

        for(int i=0; i<n; i++)
        {
            max=*max_element(a,a+n);
            min=*min_element(a,a+n);

        }

           cout<<max-min<<endl;

    }
    return 0;

}
