/* class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int max = INT_MIN;
        int n = candies.size();
        vector<bool> ans(n);
        for(int i = 0;i<n;i++)
        {
            if(candies[i]>max)
                max = candies[i];
        }
        for(int i = 0;i<n;i++)
        {
            if((candies[i] + extraCandies)>=max)
                ans[i] = true;
            else
                ans[i] = false;
        }
        return ans;
    }
}; */
/*
    Question Type: Array / Greedy

    Approach:
    First find the maximum number of candies any child currently has.

    Then traverse the array again and check whether each child can
    reach or exceed that maximum after receiving extraCandies.

    Store the result for each child in a boolean array.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/