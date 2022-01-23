
#include <iostream>
using namespace std;

int main() {


	long long int t;
	cin>>t;

	while(t--)
	{

	    long long int n;
	    cin>>n;
	    long long int a[n];

	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }

	    long long int x=a[0];
	    long long int count=1;
	    for(int i=1; i<n; i++)
	    {
	        if(a[i]<=x)
	        {
	            x=a[i];
	            count++;
	        }
	    }
	    cout<<count<<endl;





	}









	return 0;
}
