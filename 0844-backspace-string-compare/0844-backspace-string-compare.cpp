class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans,ans1;
        for(char c:s)
        {
            if(c=='#')
            {
                if(!ans.empty())
                {
                    ans.pop_back();
                }
            }
            else{
                ans.push_back(c);
            }
        }
        for(char w:t)
        {
            if(w=='#')
            {
                if(!ans1.empty())
                {
                    ans1.pop_back();
                }
            }
            else{
                ans1.push_back(w);
            }
        }
        if(ans==ans1) return true;
        return false;
        
    }
};