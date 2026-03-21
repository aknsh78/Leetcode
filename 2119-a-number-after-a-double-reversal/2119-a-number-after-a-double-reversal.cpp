class Solution {
public:
    bool isSameAfterReversals(int num) {
        string s=to_string(num);
        reverse(s.begin(),s.end());
        int first=stoi(s);
        s=to_string(first);
        reverse(s.begin(),s.end());
        int second=stoi(s);

        return num==second ;
        
    }
};