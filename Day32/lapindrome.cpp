#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
    	string str;
    	cin>>str;

    	int n=str.length();

    	string s1,s2;

    	for(int i=0; i<n/2; i++)
    	{
    	    s1+=str[i];
    	    s2+=str[n-i-1];
    	}

    	sort(s1.begin(),s1.end());
    	sort(s2.begin(),s2.end());

    	if(s1==s2)
    	{
    	    cout<<"YES"<<endl;
    	}
    	else
    	{
    	    cout<<"NO"<<endl;
    	}




	}








	return 0;
}
