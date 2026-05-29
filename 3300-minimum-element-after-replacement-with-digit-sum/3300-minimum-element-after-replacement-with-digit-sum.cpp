class Solution {
public:
    int minElement(vector<int>& nums) {
        
        vector<int>ans;
        for(int x:nums)
        {
            int sum=0;
            while(x>0)
            {
                sum+=x%10;
                x=x/10;
            }
            ans.push_back(sum);
            
        }
        sort(ans.begin(),ans.end());
        return ans[0];
        
    }
};