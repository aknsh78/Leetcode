class Solution {
public:
    bool checkZeroOnes(string s) {
        int count0=0,count1=0;
        int max0=0,max1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                count0++;
                count1=0;
            }

            else
            {
                count1++;
                count0=0;
            }
            max0=max(count0,max0);
            max1=max(count1,max1);
        }
        
        
        return max0<max1;
    }
};