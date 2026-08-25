/* class Solution {
public:
    long long findKthSmallest(vector<int>& coins, int k) 
    {
        int n = coins.size();
        auto count_up_to = [&](long long X) 
        {
            long long total = 0;
            for (int mask = 1; mask < (1 << n); mask++) 
            {
                long long current_lcm = 1;
                int bits_set = 0;
                bool overflow = false;
                for (int i = 0; i < n; i++) 
                {
                    if (mask & (1 << i)) {
                        bits_set++;
                        current_lcm = std::lcm(current_lcm, (long long)coins[i]);
                        if (current_lcm > X) 
                        { 
                            overflow = true;
                            break;
                        }
                    }
                }
                if (overflow) continue;
                if (bits_set % 2 == 1) 
                {
                    total += X / current_lcm;
                } else 
                {
                    total -= X / current_lcm;
                }
            }
            return total;
        };
        long long low = 1;
        long long min_coin = *min_element(coins.begin(), coins.end());
        long long high = min_coin * k;
        long long ans = high;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (count_up_to(mid) >= k) 
            {
                ans = mid;
                high = mid - 1;
            } 
            else 
            {
                low = mid + 1;
            }
        }
        return ans;
    }
}; */
/*
    Pattern: Binary Search on Answer + Inclusion-Exclusion

    Algorithm:
    1. The kth smallest number must be between 1 and
       min_coin * k.
    2. Binary search this range to find the smallest number X
       such that there are at least k valid numbers <= X.
    3. To count the valid numbers <= X, use Inclusion-Exclusion.
    4. Generate every possible subset of coins using bitmasks.
    5. Find the LCM of the coins in each subset.
    6. X / LCM gives the number of values <= X divisible by
       every coin in that subset.
    7. Add the count for subsets with an odd number of elements
       and subtract it for subsets with an even number of elements.
    8. If count_up_to(mid) >= k, mid can be the answer,
       so search for a smaller value.
    9. Otherwise, search on the right side.

    Time Complexity: O(2^n * n * log(min_coin * k))
    Space Complexity: O(1) extra space
*/