class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int>ans=nums;
        vector<int>res;
        sort(ans.begin(),ans.end(),greater<>());
        unordered_map<int,int>mp;
        
        for(int i=0;i<k;i++)
        {
            mp[ans[i]]++;
        }
        for(int x:nums)
        {
            if(mp[x]>0)
            {
                res.push_back(x);
                mp[x]--;
            }
        }
        return res;
        
    }
};