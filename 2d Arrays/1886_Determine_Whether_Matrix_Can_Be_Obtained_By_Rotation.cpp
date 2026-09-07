/* class Solution 
{
private:
    void rotate(vector<vector<int>>& nums)
    {
        int n = nums.size();
        int m = nums[0].size();
        for(int i = 0;i<n;i++)
        {
            for(int j = i+1;j<m;j++)
            {
                swap(nums[i][j],nums[j][i]);
            }
        }
        for(int i = 0;i<n;i++)
        {
            reverse(nums[i].begin(),nums[i].end());
        }
    }
    bool check(vector<vector<int>>& mat,vector<vector<int>>& target)
    {
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(mat[i][j]!=target[i][j])
                    return false;
            }
        }
        return true;
    }
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) 
    {
        int count = 1;
        while(count<=4)
        {
            if(check(mat,target))
            {
                return true;
            }
            else 
            {
                count++;
                rotate(mat);
            }
        }
        return false;
    }
}; */
/*
    Question Type: Matrix / Array / Matrix Rotation

    Approach:
    Check whether the target matrix can be obtained by rotating the
    given matrix by 0°, 90°, 180°, or 270°.

    1. Compare the current matrix with the target matrix.
    2. If they match, return true.
    3. Otherwise, rotate the matrix 90° clockwise using:
       - Transpose the matrix.
       - Reverse every row.
    4. Repeat the process for all four possible rotations.
    5. If none of the rotations match the target, return false.

    The transpose is performed by swapping elements across the
    main diagonal, followed by reversing each row.

    Time Complexity: O(n²)
    Space Complexity: O(1)
*/