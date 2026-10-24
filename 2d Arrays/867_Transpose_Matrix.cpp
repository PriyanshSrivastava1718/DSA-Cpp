/* class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> arr(m,vector<int> (n));
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                arr[i][j] = matrix[j][i];
            }
        }
        return arr;
    }
}; */
/*
Problem: 867. Transpose Matrix
Platform: LeetCode
Topic: Arrays, Matrices

Approach:
1. Find the dimensions of the original matrix: n rows and m columns.
2. Create a new matrix of dimensions m x n.
3. Traverse the new matrix using nested loops.
4. Assign arr[i][j] = matrix[j][i], swapping the row and
   column indices to obtain the transpose.
5. Return the transposed matrix.

Time Complexity: O(n * m)
Auxiliary Space: O(n * m)

Key Learning:
Transposing a matrix swaps its row and column indices.
An n x m matrix becomes an m x n matrix, so the solution
works for both square and rectangular matrices.
*/
