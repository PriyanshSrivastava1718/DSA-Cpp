/* class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        int n = mat.size();
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            int j = 0;
            j = (n-1)-i;
            if(i!=j)
                sum+=mat[i][j];
            j=i;
            sum+=mat[i][j];
        }
        return sum;
    }
}; */
/*
Problem: 1572. Matrix Diagonal Sum
Platform: LeetCode
Topic: Arrays, Matrices

Approach:
1. Traverse the matrix using a single loop from 0 to n-1.
2. Calculate the secondary diagonal column index using j = n - 1 - i.
3. Add the secondary diagonal element if i != j to avoid
   counting the center element twice.
4. Add the primary diagonal element mat[i][i].

Time Complexity: O(n)
Auxiliary Space: O(1)

Key Learning:
The primary diagonal follows mat[i][i], while the secondary
diagonal follows mat[i][n - 1 - i]. A single loop can calculate
both diagonal sums efficiently.
*/

