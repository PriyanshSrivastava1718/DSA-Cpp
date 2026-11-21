/* class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) 
    {
        int n = prices.size();
        for(int i = 0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                if(prices[j]<=prices[i])
                {
                    prices[i] =abs(prices[j]-prices[i]);
                    break;
                }
            }
        }
        return prices;
    }
}; */
/*
LeetCode - 1475. Final Prices With a Special Discount in a Shop

Approach:
1. Traverse the prices array.
2. For each price, search all elements to its right.
3. Find the first price smaller than or equal to the current price.
4. Subtract it as the discount and stop searching.
5. If no qualifying price exists, leave the price unchanged.

Time Complexity: O(n^2)
Auxiliary Space Complexity: O(1)

Concepts: Arrays, Nested Loops, Brute Force
*/