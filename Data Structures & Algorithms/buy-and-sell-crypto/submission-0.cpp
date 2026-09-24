class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int buy = prices[0];
        for (auto& i : prices) {
            res = max(res, i - buy);
            buy = min(buy, i);
        }
        return res;
    }
};
