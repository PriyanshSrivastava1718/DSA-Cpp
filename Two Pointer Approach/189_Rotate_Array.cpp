/* class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        k = k%n;
        if(k==0)
            return;
        else 
        {
            reverse(nums.begin(),nums.end());
            int s = 0;
            int e = k-1;
            reverse(nums.begin()+s,nums.begin()+e+1);
            int x = n-1;
            reverse(nums.begin()+k,nums.begin()+x+1);
        }
    }
}; */
/*
    Question Type: Array Rotation / In-Place Manipulation

    Approach:
    - Reduce `k` using `k %= n` because rotating an array by `n` positions
      returns it to its original state.
    - Reverse the entire array.
    - Reverse the first `k` elements.
    - Reverse the remaining `n-k` elements.
    - Each reversal is performed in-place using two pointers internally.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/