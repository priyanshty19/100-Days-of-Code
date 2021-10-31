class Solution{
public:

	string firstAlphabet(string S)
	{
	    int n=S.length();
	    string str="";
	    str+=S[0];

	    for(int i=1; i<n; i++)
	    {
	        if(S[i-1]==' ')
	        {
	            str+=S[i];
	        }
	    }
	    return str;


	}
};
