class Solution {
public:
    int maxDifference(string s) {
        vector<int>ans;
        unordered_map<char,int>m;
        for(char c:s)
        {
            m[c]++;
        }
        int maxo=0;
        int mine=INT_MAX;
        for(auto it:m)
        {
            int n=it.second;
            if(n%2==1)
            {
                maxo=max(maxo,n);
            }
            else{
                mine=min(mine,n);
            }
        }
        int diff=maxo-mine;
        return diff;
        
    }
};