/* class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(i==j&&grid[i][j]==0)
                    return false;
                else if(i+j == n-1 && grid[i][j]==0)
                    return false;
                else if(i!=j && i+j != n-1 && grid[i][j]!= 0)
                    return false;
                
            }
        }
        return true;
    }
}; */
/*
Problem: 2319. Check if Matrix Is X-Matrix
Platform: LeetCode
Topic: Arrays, Matrices

Approach:

1. Traverse every element using nested loops.
2. If an element belongs to the primary diagonal (i == j),
   check that it is non-zero.
3. If an element belongs to the secondary diagonal
   (i + j == n - 1), check that it is non-zero.
4. For elements outside both diagonals, check that they are zero.
5. Return false if any condition is violated; otherwise, return true.

Time Complexity: O(n^2)
Auxiliary Space: O(1)

Key Learning:
An X-Matrix requires all diagonal elements to be non-zero
and all elements outside both diagonals to be zero.
The center element of an odd-sized matrix belongs to both diagonals.
*/
