class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char>l,u;
        for(char c:word)
        {
            if(islower(c))
            {
                l.insert(c);
            }
            else{
                u.insert(c);
            }
        }
        int count=0;
        for(char x:l)
        {
            char cap=toupper(x);
            if(u.count(cap))
            {
                count++;
            }
        }
        return count;
    }
};