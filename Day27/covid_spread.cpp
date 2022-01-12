#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int n;
	cin>>n;

	while(n--)
	{
    	long sum=1;
	    long p,d;
	    cin>>p>>d;

	    for(int i=1; i<=d; i++)
	    {
	        if(i<=10)
	        {
	            sum=sum*2;
	            if(sum>p)
	            {
	                sum=p;
	                break;
	            }
	        }
	        else if(i>=11)
	        {
	            sum=sum*3;
	            if(sum>p)
	            {
	                sum=p;
	                break;
	            }
	        }
	    }
	    	    cout<<sum<<endl;


	}


	return 0;
}
