/* class Solution {
public:
    int climbStairs(int n) 
    {
        if(n<=3)
            return n;
        int ans = 0;
        int x = 2;
        int y = 3;
        for(int i = 4;i<=n;i++)
        {
            ans = x+y;
            x = y;
            y = ans;
        }
        return ans;
    }
}; */
/*
    Question: Climbing Stairs — LeetCode 70

    Approach:
    - The number of ways to reach step n is the sum of the ways
      to reach step n-1 and step n-2.
    - Use the first two previous results instead of storing the
      complete DP array.
    - Initialize the base cases for n <= 3.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/