class Solution {
public:
    int longestContinuousSubstring(string s) {
        int leng=1;
        int ans=1;
        for(int i=1;i<s.size();i++)
        {
            if((s[i]-s[i-1])==1)
            {
                leng++;
            }
            else{
                leng=1;
            }
            ans=max(leng,ans);
            
        }
        
        return ans;
    }
};