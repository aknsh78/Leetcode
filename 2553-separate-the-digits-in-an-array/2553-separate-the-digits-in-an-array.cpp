class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>fi;
        int n=nums.size();
        for(int x:nums)
        {
             vector<int>ans;
            while(x>0)
            {
                int digit=x%10;
                ans.push_back(digit);
                x=x/10;
            }
        reverse(ans.begin(),ans.end());
        for(int x:ans)
        {
            fi.push_back(x);
        }

        }
        
        return fi;
        
    }
};