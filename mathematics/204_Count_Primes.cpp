/* class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) 
            return 0;
        vector<uint8_t> isPrime(n, 1);
        int count = 1;
        for (long long i = 3; i < n; i += 2) 
        {
            if (isPrime[i]) 
            {
                count++;
                for (long long j = i * i; j < n; j += 2 * i) 
                {
                    isPrime[j] = 0;
                }
            }
        }
        return count;
    }
}; */
/*
    Question: Count Primes — LeetCode 204

    Approach:
    - Use the Sieve of Eratosthenes.
    - Start with 2 counted separately.
    - Check only odd numbers.
    - When an odd number is prime, mark its odd multiples as non-prime.
    - Start marking from i * i because smaller multiples were already handled.

    Time Complexity: O(n log log n)
    Space Complexity: O(n)
*/