/* class Solution {
public:
    int maximumDifference(vector<int>& nums) 
    {
        int n = nums.size();
        int minSoFar = nums[0];
        int ans = -1;

        for(int i = 1; i < n; i++)
        {
            int diff = nums[i] - minSoFar;

            if(diff > 0)
                ans = max(ans, diff);

            minSoFar = min(minSoFar, nums[i]);
        }

        return ans;
    }
}; */
/*
Approach:
1. Initialize minSoFar with the first element and ans with -1.
2. Traverse the array from the second element to the end.
3. Calculate the difference between the current element and minSoFar.
4. If the difference is positive, update ans with the maximum difference found so far.
5. Update minSoFar with the minimum of minSoFar and the current element.
6. Return ans. If no valid increasing pair exists, ans remains -1.

Time Complexity: O(n), where n is the number of elements in the array.
Space Complexity: O(1), as only a constant number of variables are used.
*/