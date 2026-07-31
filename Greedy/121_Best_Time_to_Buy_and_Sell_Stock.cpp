/* class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;
        for (int i = 0; i < prices.size(); i++) 
        {
            if (prices[i] < min_price) 
            {
                min_price = prices[i];
            }
            else if (prices[i] - min_price > max_profit) 
            {
                max_profit = prices[i] - min_price;
            }
        }
        return max_profit;
    }
}; */
/*
    ALGORITHM

    1. Initialize minimum price as INT_MAX.

    2. Traverse the array from left to right.

    3. If the current price is smaller than the minimum price,
       update the minimum price.

    4. Otherwise, calculate the profit by selling on the current day.

    5. If the current profit is greater than the maximum profit,
       update the maximum profit.

    6. Return the maximum profit.

    Time Complexity  : O(N)

    Space Complexity : O(1)

    Solution Type    : Linear Traversal
                       Greedy
*/