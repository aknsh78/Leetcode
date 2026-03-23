class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int remaining;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=k)
            {
                count++;
            }
            remaining=n-count;
        }
        return remaining;
        
    }
};