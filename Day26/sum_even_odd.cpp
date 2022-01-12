#include <iostream>
using namespace std;

int main() {

	long n;
	cin>>n;
    long odd=0;
	long even=0;

	for(int i=1; i<2*n+1; i++)
	{
	    if(i%2==0)
	    {
	        even+=i;
	    }
	    else
	    {
	        odd+=i;
	    }
	}
	cout<<odd<<" "<<even<<endl;

	return 0;
}
