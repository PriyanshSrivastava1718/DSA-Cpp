/* class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) 
    {
        int n = nums.size();
        vector<long long> arr(n);
        for(int i = 0; i < n; i++)
        {
            arr[i] = (long long)nums[i] * nums[i];
        }
        sort(arr.begin(), arr.end());
        long long ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(i < n / 2)
                ans -= arr[i];
            else
                ans += arr[i];
        }
        return ans;
    }
}; */
/*
    Algorithm:
    1. Create a new array to store the squares of all elements.
    2. Square each number using long long to avoid integer overflow.
    3. Sort the squared values in ascending order.
    4. Subtract the smallest n/2 squared values from the answer.
    5. Add the remaining squared values to maximize the alternating sum.
    6. Return the final answer.

    Time Complexity: O(n log n)
    Space Complexity: O(n)

    Where n is the number of elements in the input array.
*/