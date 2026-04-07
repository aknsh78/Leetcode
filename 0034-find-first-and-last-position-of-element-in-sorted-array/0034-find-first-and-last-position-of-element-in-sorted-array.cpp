class Solution {
public:
    int firstposition(vector<int>&nums,int target)
    {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int pos=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                pos= mid;
                high=mid-1;            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return pos;

    }
    int lastposition(vector<int>&nums,int target)
    {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int pos=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                pos= mid;
                low=mid+1;            
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return pos;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first=firstposition(nums,target);
        int last=lastposition(nums,target);
        return {first,last};
        
    }
};