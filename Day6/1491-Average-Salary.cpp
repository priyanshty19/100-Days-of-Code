class Solution {
public:
    double average(vector<int>& salary) {
        *min_element(salary.begin(), salary.end())=0;
        *max_element(salary.begin(), salary.end())=0;

        double avg;
        double sum;

        for(int i=0; i<salary.size(); i++)
        {
            sum+=salary[i];
        }
        avg=sum/(salary.size()-2);

        return avg;
    }
};
