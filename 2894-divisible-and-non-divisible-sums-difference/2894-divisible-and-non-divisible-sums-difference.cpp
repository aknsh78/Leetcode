class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int>nums;
        int sumbyd=0;
        int sumrem=0;
        for(int i=0;i<n;i++)
        {
            nums.push_back(i+1);
        }
        for(int x:nums)
        {
            if(x%m==0)
            {
                sumbyd+=x;
            }
            else{
                sumrem+=x;
            }
        }
        return sumrem-sumbyd;
        
        
    }
};