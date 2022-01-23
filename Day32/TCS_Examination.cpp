#include <iostream>
using namespace std;

int sum(int arr [], int n)
{
    int summation=0;
    for(int i=0; i<n; i++)
    {
        summation+=arr[i];
    }
    return summation;
}

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int d[3];
	    for(int i=0; i<3; i++)
	    {
	        cin>>d[i];
	    }

	    int s[3];
	    for(int i=0; i<3; i++)
	    {
	        cin>>s[i];
	    }

	    if(d[0]==s[0] && d[1]==s[1] && d[2]==s[2])
	    {
	        cout<<"TIE"<<endl;
	    }

	    if(sum(d,3)>sum(s,3))
	    {
	        cout<<"DRAGON"<<endl;
	    }
	    else if(sum(d,3)<sum(s,3))
	    {
	        cout<<"SLOTH"<<endl;
	    }
	    else if(sum(d,3)==sum(s,3))
	    {
	        if(d[0]>s[0])
	        {
	            cout<<"DRAGON"<<endl;
	        }
	        else if(d[0]<s[0])
	        {
	            cout<<"SLOTH"<<endl;
	        }
	        else if(d[0]==s[0])
	        {
	            if(d[1]>s[1])
	            {
	                cout<<"DRAGON"<<endl;
	            }
	            else if(d[1]<s[1])
	            {
	                cout<<"SLOTH"<<endl;
	            }
	        }
	    }
	}


	return 0;
}
