/* class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        vector<vector<int>> ans(r, vector<int>(c));
        int r1 = mat.size();
        int c1 = mat[0].size();
        if(r1*c1 != r*c)
            return mat;
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                int index = i * c + j;

                int old_i = index / c1;
                int old_j = index % c1;

                ans[i][j] = mat[old_i][old_j];
            }
        }
        return ans;
    }
}; */
/*
    Algorithm:
    1. Store the dimensions of the original matrix.
    2. Check whether the total number of elements remains
       the same after reshaping. If not, return the original matrix.
    3. Create a result matrix of size r x c.
    4. Treat both matrices as a single 1D sequence using an
       index from 0 to m*n - 1.
    5. Convert the index into the new matrix position using:
       row = index / c
       column = index % c
    6. Convert the same index into the original matrix position using:
       row = index / n
       column = index % n
    7. Copy the element from the original matrix to the new matrix.

    Time Complexity: O(m * n)
    Space Complexity: O(r * c)
*/