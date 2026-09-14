/* class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        long long ans = INT_MIN;
        long long n = nums.size();
        sort(nums.begin(), nums.end());
        long long s = 0;
        while(s < n - 2)
        {
            long long i = s + 1;
            long long e = n - 1;
            while(i < e)
            {
                long long sum = nums[s] + nums[i] + nums[e];
                if(sum == target)
                    return target;
                if(abs(ans - target) > abs(sum - target))
                    ans = sum;
                if(sum > target)
                    e--;
                else
                    i++;
            }
            s++;
        }
        return ans;
    }
}; */
/*
    Question Type: 3Sum Closest

    Approach:
    - Sort the array.
    - Fix one element using `s`.
    - Use two pointers `i` and `e` for the remaining two elements.
    - If the sum is greater than target, move `e` left.
    - If the sum is smaller than target, move `i` right.
    - Track the sum with the minimum difference from target.
    - Return immediately if the exact target is found.

    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/