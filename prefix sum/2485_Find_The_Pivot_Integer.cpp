class Solution {
public:
    int pivotInteger(int n) 
    {
        int totalSum = n * (n + 1) / 2;  //sum of n digits
        int leftSum = 0;
        for(int i = 1; i <= n; i++)
        {
            leftSum += i;
            int rightSum = totalSum - leftSum + i;
            if(leftSum == rightSum)
                return i;
        }
        return -1;//no pivot
    }
};
/*
Approach:
1. Calculate the total sum of numbers from 1 to n.
2. Maintain a leftSum while traversing from 1 to n.
3. For every i, add i to leftSum.
4. Calculate rightSum as totalSum - leftSum + i,
   because the pivot integer i must be included on both sides.
5. If leftSum equals rightSum, return i as the pivot integer.
6. If no such integer is found, return -1.

Time Complexity: O(n)
Space Complexity: O(1)
*/