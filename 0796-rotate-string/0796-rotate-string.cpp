class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string rotate = "";
        for (int i = 0; i < s.size(); i++) {
            rotate = s.substr(i) + s.substr(0, i);
            if (goal == rotate)
                return true;
        }
        return false;
    }
};