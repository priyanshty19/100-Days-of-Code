class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        char x;
        for(int i=0; i<t.length(); i++)
        {
            if(t[i]!=s[i])
            {
                x=t[i];
                break;
            }
        }


        return x;
    }
};
