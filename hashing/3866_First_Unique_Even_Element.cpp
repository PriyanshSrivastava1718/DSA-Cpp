/* class Solution {
public:
    int firstUniqueEven(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int,int> ans;
        for(int i = 0;i<n;i++)
            ans[nums[i]]++;
        for(int i = 0;i<n;i++)
        {
            if(nums[i]%2==0&&ans[nums[i]]==1)
                return nums[i];
        }
        return -1;
    }
}; */
/*
Problem: First Unique Even Element
Platform: LeetCode
Topic: Arrays, Hashing, Frequency Counting

Approach:

* Use an unordered_map to count the frequency of each element.
* Traverse the array again in its original order.
* Return the first even element whose frequency is exactly 1.
* Return -1 if no such element exists.

Time Complexity: O(n) average
Space Complexity: O(n)

Key Learning:

* A frequency map helps identify unique elements efficiently.
* A second traversal preserves the original array order.
  */
