vector<int> matchingStrings(vector<string> strings, vector<string> queries) {

    vector<int> temp;

    int n=strings.size();
    int m=queries.size();
    for(int i=0; i<m; i++)
    {
            int counter=count(strings.begin(),strings.end(),queries[i]);
            temp.push_back(counter);
    }
    return temp;

}
