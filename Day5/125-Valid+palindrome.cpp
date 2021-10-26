class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();

        string str;
        for(int i=0; i<n; i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                str.push_back(tolower(s[i]));
            }
        }


        string p=str;
        reverse(p.begin(),p.end());

        for(int i=0; i<str.length(); i++)
        {
            cout<<str[i];
            // cout<<p[i];
        }
        if(p==str)
        {
            return 1;
        }
        else
        {
            return 0;
        }


    }
};
