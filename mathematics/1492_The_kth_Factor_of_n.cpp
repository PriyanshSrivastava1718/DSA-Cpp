/* class Solution {
public:
    int kthFactor(int n, int k) 
    {
        int ans = -1;
        int count = 0;
        for(int j = 1;j<=n;j++)
        {
            if(n%j==0)
            {
                count++;
            }
            if(count==k)
                return j;
        }
        return ans;
    }
}; */
/*
LeetCode 1492 - The kth Factor of n

Approach:
1. Traverse numbers from 1 to n.
2. Check whether n is divisible by the current number j.
3. If divisible, increment the factor count.
4. When count becomes equal to k, return j.
5. If no kth factor is found, return -1.

Time Complexity: O(n)
Space Complexity: O(1)

Concepts Used:
- Brute Force
- Loops
- Modulo Operator
- Factor Counting
*/