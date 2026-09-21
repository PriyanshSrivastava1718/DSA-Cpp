/* class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        vector<int> ans;
        int s = 0;
        int e = n-1;
        while(s<e)
        {
            if(nums[s]+nums[e]==target)
            {
                ans.push_back(s+1);
                ans.push_back(e+1);
                break;
            }
            else if(nums[s]+nums[e]>target)
                e--;
            else 
                s++;
        }
        return ans;
    }
}; */
/*
    Question Type: Two Sum on Sorted Array

    Approach:
    - Use two pointers, one at the beginning and one at the end.
    - Calculate the sum of the elements at both pointers.
    - If the sum equals the target, store their 1-based indices.
    - If the sum is greater than the target, move the right pointer left.
    - If the sum is smaller than the target, move the left pointer right.
    - Continue until the pair is found.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/