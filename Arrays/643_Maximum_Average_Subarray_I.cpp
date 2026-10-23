/* class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long currentSum = 0;
        for (int i = 0; i < k; i++) {
            currentSum += nums[i];
        }

        long long maxSum = currentSum;
        int n = nums.size();

        for (int i = k; i < n; ++i) {
            currentSum += nums[i];
            currentSum -= nums[i - k];
            maxSum = max(maxSum, currentSum);
        }

        return (double)maxSum / k;
    }
}; */
/*
Problem: 2465. Number of Distinct Averages
Platform: LeetCode
Topic: Sorting, Hash Set

Approach:
1. Sort the array in ascending order.
2. Initialize two pointers: s at the beginning and e at the end.
3. Pair the smallest and largest remaining elements.
4. Store the sum of each pair in an unordered_set.
5. Move s forward and e backward until the pointers meet.
6. Return the size of the set, which equals the number of distinct averages.

Optimization:
Instead of storing floating-point averages, store the sum of each pair.
Since every average is its pair sum divided by 2, distinct pair sums
correspond exactly to distinct averages.

Time Complexity: O(n log n)
Auxiliary Space: O(n)

Key Learning:
Sorting allows efficient pairing of the smallest and largest elements.
Storing pair sums avoids floating-point calculations while preserving
the number of distinct averages.
*/