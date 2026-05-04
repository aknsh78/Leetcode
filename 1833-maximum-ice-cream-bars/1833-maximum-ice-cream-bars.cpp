class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count=0;
        sort(costs.begin(),costs.end());
        for(int x:costs)
        {
            if(coins>=x)
            {
                coins-=x;
                count++;

            }
            else{
                break;
            }
        }
        return count;
        
    }
};