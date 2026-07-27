class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if(n<=0)
            return false;
        if(n==1)//4 power 0 = 1
            return true;
        long long p =1;//long long in case of overflow
        while(p<n) //stops at either p==n or just more then n
        {
            p = p * 4;
        }
        return p==n;        //return true or false
    }
};
/*
Algorithm: Iterative Multiplication

Approach:

- Handle non-positive numbers.
- Start with 1.
- Repeatedly multiply by 4.
- If the generated value equals n, return true.
- If the generated value becomes greater than n, stop and return false.

Time Complexity: O(log₄ n)

Space Complexity: O(1)
*/