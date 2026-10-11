/* class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) 
        {
            if (prices[i] > prices[i - 1]) 
            {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }
}; */
/*
    Question: Best Time to Buy and Sell Stock II — LeetCode 122

    Approach:
    - Traverse the prices array from the second day onward.
    - If the current price is greater than the previous day's price,
      add the difference to the total profit.
    - Capture every positive price increase to maximize total profit.
    - Return the accumulated profit.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/