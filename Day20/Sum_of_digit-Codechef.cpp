#include <iostream>
using namespace std;

int main() {

	int n;
	cin>>n;

	for(int i=0; i<n; i++)
	{
	    int a;
	    cin>>a;
	    int ans;
	    while(a>0)
	    {
	        a/10;
	        ans+=a%10;
	    }
	    cout<<ans<<endl;
	}

	return 0;
}
