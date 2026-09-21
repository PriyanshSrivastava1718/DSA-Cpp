class Solution {
public:
    int sumBase(int n, int k) 
    {
        int sum = 0;
        while(n!=0)
        {
            int mod = n%k;
            sum += mod;
            n/=k;
        }
        return sum;
    }
};
/*
    Question Type: Sum of Digits in Base K

    Approach:
    - Repeatedly divide `n` by `k`.
    - `n % k` gives the current last digit in base `k`.
    - Add this digit to `sum`.
    - Divide `n` by `k` to remove the current digit.
    - Continue until `n` becomes 0.

    Time Complexity: O(log_k(n))
    Space Complexity: O(1)
*/