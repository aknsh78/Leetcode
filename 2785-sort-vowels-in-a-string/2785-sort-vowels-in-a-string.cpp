class Solution {
public:
    bool isVowel(char c){
        return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }
    string sortVowels(string s) {
        vector<int>vowel;
        
        for(char c:s)
        {
            if(isVowel(c))
            {
                vowel.push_back(c);
            }
        }
        sort(vowel.begin(),vowel.end());
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(isVowel(s[i]))
            {
                s[i]=vowel[j++];
            }
        }
        return s;
        
    }
};