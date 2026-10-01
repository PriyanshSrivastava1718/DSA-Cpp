/* class Solution {
public:
    int xorBeauty(vector<int>& nums) 
    {
        int ans = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            ans ^= nums[i];
        }
        return ans;
    }
}; */
/*
    Question: Find Xor-Beauty of Array — LeetCode 2527

    Approach:
    - Analyze the XOR of all possible ordered triplets.
    - Triplets with exactly two equal indices cancel out through XOR.
    - Triplets with three different indices also cancel in groups.
    - For i = j = k, the expression reduces to nums[i].
    - Since x ^ x ^ x = x, the only surviving contribution is
      the XOR of every element in the array.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/