/* class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> arr;
        if(n<=3)
            return ans;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n-3;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            for(int j = i+1;j<n-2;j++)
            {
                if(j > i+1 && nums[j] == nums[j-1])
                    continue;
                int s = j+1;
                int e = n-1;
                while(s<e)
                {
                    long long sum = (long long)nums[i] + nums[j] + nums[s] + nums[e];
                    if(sum == (long long)target)
                    {
                        arr.push_back(nums[i]);
                        arr.push_back(nums[j]);
                        arr.push_back(nums[s]);
                        arr.push_back(nums[e]);
                        ans.push_back(arr);
                        arr.clear();
                        s++;
                        e--;
                        while(s < e && nums[s] == nums[s-1])
                            s++;
                        while(s < e && nums[e] == nums[e+1])
                            e--;
                    }
                    else if(sum<(long long)target)
                    {
                        s++;
                    }
                    else
                        e--;
                }
            }
        }
        return ans;
    }
}; */
/*
    Algorithm:
    1. Sort the input array in ascending order to make the two-pointer
       technique possible.
    2. Iterate through the array using the first pointer i to fix the
       first element of the quadruplet.
    3. Skip duplicate values at index i to avoid generating duplicate
       quadruplets.
    4. Use a second pointer j to fix the second element, skipping
       duplicate values at index j as well.
    5. Initialize two pointers, s = j+1 and e = n-1, to find the
       remaining two elements.
    6. Calculate the sum of nums[i], nums[j], nums[s], and nums[e]
       using long long to prevent integer overflow.
    7. If the sum equals the target, store the quadruplet in the answer
       array, move both pointers inward, and skip duplicate values.
    8. If the sum is smaller than the target, increment s to increase
       the sum.
    9. If the sum is greater than the target, decrement e to decrease
       the sum.
    10. Repeat until all valid combinations have been explored and
        return the answer array.

    Time Complexity: O(n^3)
    Space Complexity: O(log n) auxiliary space, excluding the output.

    Where n is the number of elements in the input array.
*/