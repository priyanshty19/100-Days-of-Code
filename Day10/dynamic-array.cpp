vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    int lastAnswer=0;
    int idx=0;

    vector<vector<int>> temp(n);
    vector<int> ans;

    for(int i=0; i<queries.size(); i++)
    {
        int type=queries[i][0];
        int x=queries[i][1];
        int y=queries[i][2];

        idx=((x^lastAnswer)%n);
        if(type==1)
        {
            temp[idx].push_back(y);
        }
        else if(type==2)
        {
            lastAnswer=temp[idx][y%(temp[idx].size())];
            ans.push_back(lastAnswer);
        }
    }

    return ans;

}
