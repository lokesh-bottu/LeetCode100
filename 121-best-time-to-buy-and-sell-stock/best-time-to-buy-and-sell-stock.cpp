class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 0;
        int temp = 0;
        int profit = prices[sell] - prices[buy];
        int size = prices.size();
        for(int i =1;i<size;i++) {
            if (prices[temp] > prices[i]) {
                temp = i;
            }
            if ((prices[i] - prices[temp]) > profit && i > temp) {
                buy = temp;
                profit = prices[i] - prices[buy];
                sell = i;
            }

        }
        if (sell == 0) return 0;
        return prices[sell] - prices[buy];
    }
};