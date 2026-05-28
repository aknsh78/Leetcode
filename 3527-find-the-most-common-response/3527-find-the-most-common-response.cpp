class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        string ans="";
        unordered_map<string,int>mp;
        for(auto day:responses)
        {
            unordered_set<string>st;
            for(auto word:day)
            {
                st.insert(word);
            }
            for(auto x:st)
            {
                mp[x]++;
            }
        }
        int max=0;
        for(auto x:mp)
        {
            if(x.second>max)
            {
                max=x.second;
                ans=x.first;
            }
            else if(x.second==max && x.first<ans){
                ans=x.first;
            }
        }
        return ans;

        
    }
};