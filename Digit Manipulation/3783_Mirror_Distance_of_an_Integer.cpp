/*
    LeetCode: 3783 - Mirror Distance

    Approach:
    - Reverse the digits of the given number.
    - Calculate the absolute difference between the original number
      and its reversed value.

    Time Complexity: O(log n)
    Space Complexity: O(1)
*//* 
class Solution {
public:
    int mirrorDistance(int n) 
    {
        int reverse = 0;
        int save = n;

        while(save != 0)
        {
            int digit = save % 10;
            reverse = reverse * 10 + digit;
            save /= 10;
        }

        return abs(n - reverse);
    }
}; */
