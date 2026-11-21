/* class Solution 
{
private:
    bool safe(vector<vector<string>>& board,int n,int i,int j)
    {
        int row = i;
        int col = j;
        //row
        while(col>=0)
        {
            if(board[row][col]=="Q")
                return false;
            col--;
        }

        col = j;

        //upper dia

        while(row>=0 && col>=0)
        {
            if(board[row][col]=="Q")
                return false;
            row--;
            col--;
        }
        
        //lower dia

        row = i;
        col = j;

        while(row<=n-1  && col>=0)
        {
            if(board[row][col] == "Q")
                return false;
            row++;
            col--;
        }

        return true;
    }
    void check(vector<vector<string>>& board,int n,int j,int& ans)
    {
        if(j>=n)
        {
            ans++;
            return;
        }

        for(int i = 0;i<n;i++)
        {
            if(safe(board,n,i,j))
            {
                board[i][j] = "Q";
                check(board,n,j+1,ans);
                board[i][j] = ".";
            }
        }
    }
public:
    int totalNQueens(int n) 
    {
        vector<vector<string>> board(n,vector<string> (n,"."));
        int col = 0;
        int ans = 0;
        check(board,n,col,ans);
        return ans;
    }
}; */
/*
LeetCode - 52. N-Queens II

Approach:
1. Use the same column-wise backtracking strategy as N-Queens.
2. Check whether placing a queen at the current position is safe.
3. Recursively explore valid placements.
4. When all columns are filled, increment the solution count.
5. Backtrack to explore other possible arrangements.

Time Complexity: O(n * n!)
Auxiliary Space Complexity: O(n^2)

Concepts: Backtracking, Recursion, N-Queens
*/