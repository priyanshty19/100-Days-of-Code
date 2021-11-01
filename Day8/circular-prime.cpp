	public:
	bool checkprime(int n)
	{
	    for(int i=2; i<n; i++)
	    {
	        if(n%i==0)
	        {
	            return 0;
	        }
	    }
	    return 1;
	}


	int isCircularPrime(int n) {

	    if(n<=1)
	    {
	        return 0;
	    }

	    if(n<=3)
	    {
	        return 1;
	    }

	    int temp=n;
	    int count=0;

	    while(temp)
	    {
	        count++;
	        temp=temp/10;
	    }

	    int num=n;

	    while(checkprime(num))
	    {
	        int rem=num%10;
	        int divi=num/10;

	        num=pow(10,count-1)*rem + divi;
	        if(num==n)
	        {
	            return true;
	        }
	    }
	    return false;





	}
};
