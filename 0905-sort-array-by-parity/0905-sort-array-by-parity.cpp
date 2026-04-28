class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>even,odd,ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        for(int x:even) ans.push_back(x);
        for(int x:odd) ans.push_back(x);
        return ans;
        
    }
};