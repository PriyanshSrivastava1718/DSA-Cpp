/* class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector <int> ans;
        int i = 0;
        while(ans.size()!=nums.size())
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[n]);
            i++;
            n++;
        }
        return ans;
    }
}; */
/*
Approach:
1. Create an empty vector ans to store the shuffled array.
2. Use pointer i to traverse the first half of nums starting from index 0.
3. Use n as a pointer to traverse the second half starting from index n.
4. Alternately push nums[i] and nums[n] into ans.
5. Increment both pointers after inserting their elements.
6. Continue until ans contains all elements of nums.
7. Return the shuffled array.

Time Complexity: O(n)
Space Complexity: O(n)
*/