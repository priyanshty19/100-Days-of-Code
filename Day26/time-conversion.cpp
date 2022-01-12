#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {

    string str="";

    int h1=int(s[1])-'0';
    int h2=int(s[0])-'0';

    int hh=(h2*10+h1%10);
    if(s[8]=='A')
    {
        if(hh==12)
        {
            str+="00";
            for(int i=2; i<=7; i++)
            {
                str+=s[i];
            }
        }
        else
        {
            for(int i=0; i<=7; i++)
            {
                str+=s[i];
            }
        }


    }
    else
    {
        if(hh==12)
        {
            str+="12";
            for(int i=2; i<=7; i++)
            {
                str+=s[i];
            }
        }
        else
        {
            hh=hh+12;
            str+=to_string(hh);
            for(int i=2; i<=7; i++)
            {
                str+=s[i];
            }

        }
    }
    return str;




}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

