class Solution {
public:
    int largestInteger(int n, int s)
    {
        if(s == 0)
            return 0;

        if(s > 9 * n)       //largest possible sum
            return -1;

        int ans = 0;

        for(int i = 0; i < n; i++)      
        {
            if(s >= 9)//since biggest number add largest digit at first if possible
            {
                ans = ans * 10 + 9;
                s = s - 9;
            }
            else
            {
                ans = ans * 10 + s;
                s = 0;
            }
        }
        return ans;
    }
};
/*
Algorithm: Greedy

Approach:

- To get the largest number, place the largest possible digit at each position.
- If the remaining digit sum is at least 9, place 9.
- Otherwise, place the remaining sum and make it 0.
- Fill the remaining positions with 0.
- If the required sum is greater than 9*n, return -1.

Time Complexity: O(n)

Space Complexity: O(1)
*/