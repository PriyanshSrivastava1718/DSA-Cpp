/* 
class Solution {
public:
    bool uniformArray(vector<int>& nums1) 
    {
        return true;
    }
}; 
*/
/*
    Question Type: Array / Math / Parity

    Approach:
    The answer is always true.

    - If all elements are already even, nums1 itself can be used.
    - If all elements are odd, nums1 itself can be used.
    - If both odd and even elements exist, an even element can
      be subtracted from an odd element or an odd element from
      an even element to produce an odd value.
    - Therefore, all elements can always be made to have the
      same parity.

    Hence, no actual construction or traversal is required.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/