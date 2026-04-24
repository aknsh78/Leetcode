class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,b=0,ans;
        for(char c:moves)
        {
            if(c=='L')l++;
            else if(c=='R')r++;
            else b++;

        }
        ans=abs(l-r)+b;
        return ans;        
        
    }
};