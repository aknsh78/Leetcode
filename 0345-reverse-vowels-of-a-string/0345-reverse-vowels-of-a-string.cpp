class Solution {
public:
    bool vowel(char c)
    {
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(vowel(s[i]) && vowel(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!vowel(s[i]))
            {
                i++;
            }
            else{
                j--;
            }
        }
        return s;
        
    }
};