#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {


	int t;
	cin>>t;


	while(t--)
	{

	    int n,x;
	    cin>>n>>x;
	    bool flag=false;

	    int a[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }


	    sort(a, a + n, greater<int>());
	    int sum=0;

	    int i;

        for(i=0; i<n; i++)
    	{
    	        sum+=a[i];
    	        if(sum>=x)
    	        {
    	            flag=true;
    	            break;
    	        }

    	}
	    if(flag)
	    {
	        cout<<i+1<<endl;
	    }
	    else
	    {
	        cout<<-1<<endl;
	    }

	}




	return 0;
}
