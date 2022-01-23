#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'formingMagicSquare' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY s as parameter.
 */

int formingMagicSquare(vector<vector<int>> s) {

    int a0[9] =   {4,9,2,3,5,7,8,1,6};
    int a1[9] =   {2,7,6,9,5,1,4,3,8};
    int a2[9] =   {6,1,8,7,5,3,2,9,4};
    int a3[9] =   {2,9,4,7,5,3,6,1,8};
    int a4[9] =   {6,7,2,1,5,9,8,3,4};
    int a5[9] =   {8,1,6,3,5,7,4,9,2};
    int a6[9] =   {8,3,4,1,5,9,6,7,2};
    int a7[9] =   {4,3,8,9,5,1,2,7,6};
    int v[8];
    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<s.size(); j++)
        {
            int k=s[i][j];
            v[0]+=abs(k-a0[((i*3)+j)]);
            v[1]+=abs(k-a1[((i*3)+j)]);
            v[2]+=abs(k-a2[((i*3)+j)]);
            v[3]+=abs(k-a3[((i*3)+j)]);
            v[4]+=abs(k-a4[((i*3)+j)]);
            v[5]+=abs(k-a5[((i*3)+j)]);
            v[6]+=abs(k-a6[((i*3)+j)]);
            v[7]+=abs(k-a7[((i*3)+j)]);
        }
    }

    int min=v[0];
    for(int i=0; i<8; i++)
    {
        if(v[i]<min)
        {
            min=v[i];
        }
    }
    return min;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);

    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        string s_row_temp_temp;
        getline(cin, s_row_temp_temp);

        vector<string> s_row_temp = split(rtrim(s_row_temp_temp));

        for (int j = 0; j < 3; j++) {
            int s_row_item = stoi(s_row_temp[j]);

            s[i][j] = s_row_item;
        }
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
