class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums)
        {
            mp[x]++;
        }
        unordered_map<int,int>freqcount;
        for(auto &p:mp)
        {
            freqcount[p.second]++;

        }
        for(int x:nums)
        {
            if(freqcount[mp[x]]==1)
            {
                return x;
            }
        }
        return -1;
    }
};