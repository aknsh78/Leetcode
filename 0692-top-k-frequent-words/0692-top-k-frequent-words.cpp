class Solution {
public:
    static bool cmp(pair<string,int>&a,pair<string,int>&b)
    {
        if(a.second==b.second)
        {
            return a.first<b.first;
        }
        return a.second>b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<pair<string,int>>ans;
        unordered_map<string,int>m;
        for(string x: words)
        {
            m[x]++;
        }

        for(auto it: m)
        {
            ans.push_back({it.first,it.second});
        }
        sort(ans.begin(),ans.end(),cmp);

        vector<string>final;
        for(int i=0;i<k;i++)
        {
            final.push_back(ans[i].first);
        }
        return final;

        
    }
};