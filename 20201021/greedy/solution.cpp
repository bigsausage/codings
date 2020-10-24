class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profits=0;
        int valley=prices[0];
        int peak=prices[0];
        int i=0;
        while(i<prices.size()-1){
            // 峰底 买
            while(i<prices.size()-1 &&prices[i]>=prices[i+1]){
                i++;
            }
            valley=prices[i];
            //峰头 卖
            while(i<prices.size()-1 && prices[i]<=prices[i+1]){
                i++;
            }
            peak=prices[i];
            profits = profits+ peak-valley;
        }
        return profits;
    }
    
};
