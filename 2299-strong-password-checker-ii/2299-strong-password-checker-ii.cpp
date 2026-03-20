class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int n=password.size();
        if(n<8) return false;
        int spl=0;
        int hasupper=0;
        int haslower=0;
        int digit=0;
        for(int i=0;i<password.size();i++)
        {
            if(isdigit(password[i]))
            {
                digit++;
            }
            else if(islower(password[i]))
            {
                haslower++;
            }
            else if(isupper(password[i]))
            {
                hasupper++;
            }
            else{
                spl++;
            }
            
        }

        for(int i=1;i<n;i++)
        {
            if(i>0 && password[i]==password[i-1]) return false;
            
        }
        if(digit>=1 && haslower>=1 && hasupper>=1 && spl>=1)
        {
            return true;
        }
        return false;
        
        
    }
};