class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x=0;
        for(int num:nums)
        {
            x^=num;
        }
        int f=x^k;
        return __builtin_popcount(f);
        
    }
};