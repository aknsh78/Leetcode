class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans=INT_MAX;
        for(int i=0;i<landStartTime.size();i++)
        {
            int lf=landStartTime[i]+landDuration[i];
            for(int j=0;j<waterStartTime.size();j++)
            {
                int wtrbegin=max(lf,waterStartTime[j]);
                ans=min(ans,wtrbegin+waterDuration[j]);

            }
        }

        for(int i=0;i<waterStartTime.size();i++)
        {
            int wtrfinish=waterStartTime[i]+waterDuration[i];
            for(int j=0;j<landStartTime.size();j++)
            {
                int landbegin=max(wtrfinish,landStartTime[j]);
                ans=min(ans,landbegin+landDuration[j]);

            }
        }
        return ans;
        
    }
};