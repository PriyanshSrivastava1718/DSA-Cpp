/* class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
    unordered_set<int> seen(nums.begin(), nums.end());
    vector<int> ans;
    for (int i = 1; i <= nums.size(); i++) 
    {
        if (seen.find(i) == seen.end()) 
        {
            ans.push_back(i);
        }
    }
    
    return ans;
    }
};
 */
/*
    Algorithm:
    1. Store all the numbers present in the array inside an unordered_set.
    2. Traverse from 1 to n because every number in this range should appear.
    3. Check whether each number exists in the set.
    4. If a number is not present, add it to the answer vector.
    5. Return all the missing numbers.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/