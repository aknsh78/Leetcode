class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>m;
        for(char c:s)
        {
            m[c]++;
        }
        vector<int>freq;
        for(auto it:m)
        {
            freq.push_back(it.second);
        }
        
        sort(freq.begin(),freq.end(),greater<>());
        int del=0;
        for(int i=1;i<freq.size();i++)
        {
            while(freq[i]>0 &&freq[i]>=freq[i-1])
            {
                freq[i]--;
                del++;

            }
        }
        return del;
        
        
    }
};