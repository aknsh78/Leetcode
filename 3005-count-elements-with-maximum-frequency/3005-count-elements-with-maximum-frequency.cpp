class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums)
        {
            m[x]++;
        }
        int maxi=0;
        for(auto it:m)
        {
            maxi=max(maxi,it.second);
        }
        int ans=0;
        for(auto it:m)
        {
            if(it.second==maxi)
            {
                ans+=it.second;
            }

        }
        return ans;
    }
};