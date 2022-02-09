#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <sstream>
using namespace std;


int main() {


	int t;
	cin>>t;
	while(t--)
	{

	    int n;
	    int k;
	    cin>>n>>k;
	    string s;
	    cin>>s;


	    int count=0;
	    vector<int> v;


	    for(int i=0; i<floor(n/2); i++)
	    {
	        if(s[i]!=s[n-1-i])
	        {
	            count++;
	        }
	    }


	    if(k>=count)
	    {
	        if((k-count)%2==0)
	        {
	            cout<<"YES"<<endl;
	        }
	        else if(n%2==0)
	        {
	            cout<<"NO"<<endl;
	        }
	        else
	        {
	            cout<<"YES"<<endl;
	        }
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }




	}



	return 0;
}
