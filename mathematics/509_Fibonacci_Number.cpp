/* class Solution {
public:
    int fib(int n)
    {
        if(n==0)   
            return 0;
        if(n==1)
            return 1;
        return fib(n-1)+fib(n-2);
    }
}; */
/*
Problem: Fibonacci Number
Platform: LeetCode (LC 509)
Topic: Recursion, Mathematics

Approach:

* Return 0 when n == 0 and 1 when n == 1.
* Recursively calculate the sum of the two preceding Fibonacci numbers.
* Continue until a base case is reached.

Time Complexity: O(2^n)
Space Complexity: O(n) auxiliary space

Key Learning:
The Fibonacci sequence demonstrates how a problem can be broken into two smaller recursive subproblems.
*/
