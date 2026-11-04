/* class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int mx = 0;
        for (int x : nums) 
        {
            mx = max(mx, x);
        }
        int moves = 0;
        for (int x : nums) 
        {
            moves += mx - x;
        }
        return moves;
    }
}; */
/*
Problem: LeetCode 453 - Minimum Moves to Equal Array Elements

Approach:
1. Find the maximum element in the array.
2. Calculate the difference between the maximum element
   and every other element.
3. Add all these differences to get the minimum moves.

Key Observation:
Incrementing n-1 elements by 1 is equivalent to
decrementing one element by 1.
Therefore, the optimal target is the minimum element,
not the maximum.

Time Complexity: O(N)
- Two traversals of the array.

Space Complexity: O(1)
- Only constant extra variables are used.
*/