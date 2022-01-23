#include <iostream>
using namespace std;

int main() {


	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int g;
	    cin>>g;
	    while(g--)
	    {
        	long long int i,n,q;
    	    cin>>i>>n>>q;
    	    if(n%2==0 || i==q)
    	    {
    	        cout<<n/2<<endl;
    	    }
    	    else
    	    {
    	        cout<<((n/2)+1)<<endl;
    	    }
	    }


	}




	return 0;
}
