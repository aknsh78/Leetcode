class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans1="";
        for(string s:word1)
        {
            ans1+=s;

        }
        string ans2="";
        for(string c:word2)
        {
            ans2+=c;

        }
        if(ans1==ans2) return true;
        else return false;
        
        
    }
};