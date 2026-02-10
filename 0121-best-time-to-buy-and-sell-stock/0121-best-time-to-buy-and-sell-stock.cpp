class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP = prices[0], ans = 0;
        for (int i = 1; i < prices.size(); i++) {
            minP = min(minP, prices[i]);
            ans = max(ans, prices[i] - minP);
        }
        return ans;
    }
};
