/* class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k % 2 == 0 || k % 5 == 0) 
        {
            return -1;
        }
        int remainder = 0;
        for (int length = 1; length <= k; length++) 
        {
            remainder = (remainder * 10 + 1) % k;
            if (remainder == 0) 
            {
                return length;
            }
        }
        return -1;
    }
}; */
/*
    Algorithm:
    1. If k is divisible by 2 or 5, return -1 because
       a number consisting only of 1s cannot be divisible
       by 2 or 5.
    2. Start with remainder = 0.
    3. Generate the remainder of the repunit without
       actually creating the potentially huge number.
    4. For every length, calculate the new remainder using:
       (previous remainder * 10 + 1) % k
    5. If the remainder becomes 0, the current length is
       the smallest repunit divisible by k.
    6. Only k iterations are required because there are
       only k possible remainders.

    Time Complexity: O(k)
    Space Complexity: O(1)
*/