class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int final=0;
        for(auto &q:queries){
            int l=q[0],r=q[1],k=q[2],v=q[3];
            for(int idx=l;idx<=r;idx+=k)
            {
                nums[idx]=((long long)nums[idx]*v)%(1000000007);
            }
        }
        for(int x:nums)
        {
            final^=x;
        }
        return final;
        
    }
};