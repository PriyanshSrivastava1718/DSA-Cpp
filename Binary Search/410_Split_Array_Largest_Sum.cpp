/* class Solution {
private:
    bool isValid(const vector<int>& nums, int k, long long maxSum) {
        int count = 1;          
        long long currentSum = 0;

        for (int num : nums) {
            if (currentSum + num > maxSum) {
                count++;        
                currentSum = num;
            } else {
                currentSum += num;
            }
        }

        return count <= k;
    }

public:
    int splitArray(vector<int>& nums, int k) {
        long long low = 0;      
        long long high = 0;    

        for (int num : nums) {
            low = max(low, (long long)num);
            high += num;
        }

        long long ans = high;
        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (isValid(nums, k, mid)) {
                ans = mid;      
                high = mid - 1;
            } else {
                low = mid + 1;   
            }
        }

        return ans;
    }
}; */
/*
    Pattern: Binary Search on Answer

    Algorithm:
    1. The minimum possible answer is the largest element in nums,
       because no subarray can have a sum smaller than it.
    2. The maximum possible answer is the sum of all elements,
       when the entire array is one subarray.
    3. Binary search between low and high.
    4. For each mid, check whether the array can be split into
       at most k subarrays such that no subarray has a sum > mid.
    5. If possible, try a smaller maximum sum.
    6. Otherwise, increase the maximum allowed sum.

    isValid():
    Greedily create a new subarray whenever adding the next element
    would make the current sum exceed maxSum.

    Time Complexity: O(n log(sum(nums)))
    Space Complexity: O(1)
*/