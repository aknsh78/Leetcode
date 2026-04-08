class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        for(int i=0;i<n;i++){
            vector<int>row(n+1,0);
            vector<int>col(n+1,0);
            for(int j=0;j<n;j++)
            {
                int val1=matrix[i][j];
                if(row[val1]>0) return false;
                row[val1]++;
                int val2=matrix[j][i];
                if(col[val2]>0) return false;
                col[val2]++;
            }
        }
        return true;
        
    }
};