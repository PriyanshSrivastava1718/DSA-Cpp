/* class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int startrow = 0;
        int endrow = n - 1;
        int startcol = 0;
        int endcol = n - 1;
        int count = 1;
        while(startrow <= endrow && startcol <= endcol)
        {
            for(int i = startcol; i <= endcol; i++)
                ans[startrow][i] = count++;

            startrow++;
            for(int i = startrow; i <= endrow; i++)
                ans[i][endcol] = count++;

            endcol--;
            for(int i = endcol; i >= startcol && startrow <= endrow; i--)
                ans[endrow][i] = count++;

            endrow--;
            for(int i = endrow; i >= startrow && startcol <= endcol; i--)
                ans[i][startcol] = count++;

            startcol++;
        }
        return ans;
    }
}; */
/*
    Algorithm:
    1. Create an n x n matrix and initialize count = 1.
    2. Use four boundaries to track the remaining empty area:
       startrow, endrow, startcol and endcol.
    3. Fill the top row from left to right and move startrow down.
    4. Fill the right column from top to bottom and move endcol left.
    5. Fill the bottom row from right to left if rows still remain,
       then move endrow up.
    6. Fill the left column from bottom to top if columns still remain,
       then move startcol right.
    7. Repeat until all positions are filled.
    8. Return the generated spiral matrix.

    Time Complexity: O(n^2)
    Space Complexity: O(n^2)
*/