class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int>freq(100001,0);
        for(int num :nums)
        {
            if(num%2==0)
            {
                freq[num]++;
            }

        }
        int result=-1;
        int max=0;
        for(int i=0;i<freq.size();i++)
        {
            if(freq[i]>max)
            {
                max=freq[i];
                result=i;
            }
        }
        return result;
        
    }
};