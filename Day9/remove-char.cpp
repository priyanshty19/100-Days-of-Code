class Solution {
  public:
    string removeChars(string string1, string string2) {

        unordered_set<char> s;
        for(auto x: string2)
        {
            s.insert(x);
        }

        string str="";

        for(auto x:string1)
        {
            if(s.find(x)==s.end())
            {
                str+=x;
            }
        }
        return str;

    }

};
