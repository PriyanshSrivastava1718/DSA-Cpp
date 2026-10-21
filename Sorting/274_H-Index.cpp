/* class Solution {
public:
    int hIndex(vector<int>& nums) 
    {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        for(int i = 0;i<n;i++)
        {
            if(nums[i]>=i+1)
                ans = i+1;
            else 
                break;
        }
        return ans;
    }
}; */
/* 
Approach:
1. Sort the array in ascending order and reverse it to arrange citation counts in descending order.
2. Traverse the array and check whether nums[i] >= i + 1.
3. If the condition holds, update the H-index to i + 1; otherwise, break the loop because subsequent elements cannot satisfy a larger H-index.
4. Return the maximum valid H-index.

Time Complexity: O(n log n), where n is the number of papers, due to sorting.
Space Complexity: O(log n), due to the auxiliary space used by the sorting algorithm.
 */