class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            int j=n-i-1;
            int small=min(s[i],s[j]);
            s[i]=small;
            s[j]=small;
            j++;
            
        }
        return s;
        
    }
};