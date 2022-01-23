#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{

	    long int a;
	    string origin;
	    cin>>a>>origin;
	    long int sum=0;
	    string s;
	    bool org=false;
	    if(origin=="INDIAN")
	    {
	        org=true;
	    }

	    while(a--)
	    {
            cin>>s;
	        int n;

	        if(s=="CONTEST_WON")
	        {
	            cin>>n;
	            sum+=300;
	            if(n<20)
	            {
	                sum+=20-n;
	            }
	        }
	        if(s=="TOP_CONTRIBUTOR")
	        {
	            sum+=300;
	        }
	        if(s=="BUG_FOUND")
	        {
	            cin>>n;
	            sum+=n;
	        }
	        if(s=="CONTEST_HOSTED")
	        {
	            sum+=50;
	        }
	    }

        if(org) cout<<sum/200<<endl;
        else cout<<sum/400<<endl;



	}



	return 0;
}
