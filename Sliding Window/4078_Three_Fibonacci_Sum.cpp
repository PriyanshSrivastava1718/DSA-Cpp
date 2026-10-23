/* class Solution {
public:
    bool threeFibonacciSum(int n) 
    {
        int sum = 2;
        if(n<2)
            return false;
        if(n==2)
            return true;
        int first = 0;
        int second = 1;
        int third = 1;
        while(sum<=n)
        {
            sum -= first;
            sum += second+third;
            first = second;
            second = third;
            third = first+second;
            if(sum == n)
                return true;
        }
        return false;
    }
}; */
/*
Problem: 4078. Three Fibonacci Sum
Platform: LeetCode
Topic: Sliding Window (Fixed Size)

Approach:
1. Initialize the first three Fibonacci terms as 0, 1, and 1.
2. Set the initial window sum to 2.
3. Slide the window by subtracting the outgoing Fibonacci term
   and adding the next two terms.
4. Update the three Fibonacci variables to generate the next
   consecutive Fibonacci terms.
5. Return true if the window sum equals n.
6. Stop when the sum exceeds n, since subsequent window sums
   will not decrease.

Time Complexity: O(log n)
Auxiliary Space: O(1)

Key Learning:
A fixed-size sliding window can be maintained over a sequence
generated dynamically, without storing the entire sequence.
*/