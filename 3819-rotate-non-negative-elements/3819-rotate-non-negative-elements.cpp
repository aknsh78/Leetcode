class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pos;
        for(int x:nums)
        {
            if(x>=0)
            {
                pos.push_back(x);
            }
        }
        int m=pos.size();
        if(m==0) return nums;

        vector<int> temp(m);

        for(int i = 0; i < m; i++) {
            temp[i] = pos[(i+k) % m];
        }

        int j = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] >= 0) {
                nums[i] = temp[j++];
            }
        }

        return nums;
    }
};