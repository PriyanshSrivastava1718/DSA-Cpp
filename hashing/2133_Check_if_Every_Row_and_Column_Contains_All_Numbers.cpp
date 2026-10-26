/* class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        unordered_set<int> ans;
        unordered_set<int> col;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(ans.count(matrix[i][j]))
                    return false;
                if(col.count(matrix[j][i]))
                    return false;
                ans.insert(matrix[i][j]);
                col.insert(matrix[j][i]);
            }
            col.clear();
            ans.clear();
        }
        return true;
    }
}; */
/*
Problem: 2133. Check if Every Row and Column Contains All Numbers
Platform: LeetCode
Topic: Arrays, Matrices, Hashing

Approach:

1. Initialize two unordered sets: ans for rows and col for columns.
2. Traverse the matrix using nested loops.
3. Check whether matrix[i][j] already exists in ans.
   If it does, return false; otherwise, insert it.
4. Check whether matrix[j][i] already exists in col.
   If it does, return false; otherwise, insert it.
5. Clear both sets after processing each row and column.
6. If no duplicates are found, return true.

Time Complexity: O(n^2) average case
Auxiliary Space: O(n)

Key Learning:
Rows and columns can be checked simultaneously using the same
nested loops. An unordered_set helps detect duplicates efficiently.
*/
