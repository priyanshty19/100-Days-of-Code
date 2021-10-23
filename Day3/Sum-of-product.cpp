class Solution{
	public:
	long long int sumofproduct(int n)
	{
	    int sum=0;

	    for(int i=1; i<=n; i++)
	    {
	        int y=floor(n/i);
	        sum+=y*i;
	    }
	    return sum;

	}
};
