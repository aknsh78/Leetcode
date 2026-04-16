class Solution {
public:
    int minSteps(string s, string t) {
        int moves=0;
        vector<int>freq(26,0);
        for(char c:s)
        {
            freq[c-'a']++;
        }
        for(char c:t)
        {
            freq[c-'a']--;
        }
        for(int x:freq)
        {
            if(x>0)
            {
                moves+=x;
            }
        }
        return moves;
        
    }
};