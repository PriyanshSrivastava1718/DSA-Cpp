/* class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty()) return res;
        
        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;
        
        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                res.push_back(matrix[top][i]);
            }
            top++;
            
            for (int i = top; i <= bottom; i++) {
                res.push_back(matrix[i][right]);
            }
            right--;
            
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        
        return res;
    }
}; */
/*
    Algorithm:
    1. Use four boundaries to keep track of the unvisited part
       of the matrix:
       top, bottom, left and right.
    2. Traverse the top row from left to right.
    3. Move the top boundary down.
    4. Traverse the right column from top to bottom.
    5. Move the right boundary left.
    6. Traverse the bottom row from right to left if it is still
       inside the remaining boundary.
    7. Move the bottom boundary up.
    8. Traverse the left column from bottom to top if it is still
       inside the remaining boundary.
    9. Move the left boundary right.
    10. Repeat until all elements have been visited.

    Time Complexity: O(m * n)
    Space Complexity: O(1) excluding the output vector
*/