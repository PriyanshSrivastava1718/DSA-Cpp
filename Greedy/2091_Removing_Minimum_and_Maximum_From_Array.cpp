/* class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        
        int minIdx = 0;
        int maxIdx = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] < nums[minIdx]) minIdx = i;
            if (nums[i] > nums[maxIdx]) maxIdx = i;
        }

        int left = min(minIdx, maxIdx);
        int right = max(minIdx, maxIdx);

        int option1 = right + 1;  
        int option2 = n - left;
        int option3 = (left + 1) + (n - right);

        return min({option1, option2, option3});
    }
}; */
/*
    Algorithm:
    1. Find the indices of the minimum and maximum elements.
    2. Let left be the smaller index and right be the larger index.
    3. There are three possible ways to remove both elements:
       - Remove everything from the left up to right.
       - Remove everything from the right starting from left.
       - Remove the left part up to left and the right part
         starting from right.
    4. Calculate the deletions required for all three options.
    5. Return the minimum of the three.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/