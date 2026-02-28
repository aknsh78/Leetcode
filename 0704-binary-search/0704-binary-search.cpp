class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int loow=0,high=n-1;
        while(high>=loow){
            int mid=(loow+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target)
            {
                loow=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    
    }
};