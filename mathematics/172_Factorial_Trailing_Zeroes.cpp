/* class Solution {
public:
    int trailingZeroes(int n) 
    {
        int count = 0;
        while(n!=0)
        {
            n = n /5;
            count=count+n;
        }
        return count;
    }
};   */
/*
    Question Type: Math / Factor Counting

    Approach:
    Trailing zeroes are created by factors of 10, and:
    10 = 2 × 5

    Since factorials contain more factors of 2 than 5,
    the number of trailing zeroes depends on the number
    of factors of 5.

    1. Count numbers divisible by 5 using n/5.
    2. Numbers like 25, 125, etc. contain additional factors
       of 5, so repeatedly divide n by 5.
    3. Add each quotient to the count.
    4. Continue until n becomes 0.

    Time Complexity: O(log₅ n)
    Space Complexity: O(1)
*/