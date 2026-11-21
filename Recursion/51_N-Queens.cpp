/* class Solution 
{
private: 
    bool safe(vector<vector<string>>& board,int n,int i,int j)
    {
        int row = i;
        int col = j;

        //roww

        while(col>=0)
        {
            if(board[row][col]=="Q")
                return false;
            col--;
        }
        col = j;

        //upper dia

        while(i>=0 && j>=0)
        {
            if(board[i][j]=="Q")
                return false;
            i--;
            j--;
        }

        i = row;
        j = col;

        //lower dia

        while(i<n && j>=0)
        {
            if(board[i][j]=="Q")
                return false;
            i++;
            j--;
        }

        return true;
    }
    void saveans(vector<vector<string>>& board,vector<vector<string>>& ans,int n)
    {
        vector<string> arr;
        string col ="";
        for(int i = 0;i<n;i++)
        {
            col ="";
            for(int j = 0;j<n;j++)
            {
                if(board[i][j]=="Q")
                    col+="Q";
                else
                    col+=".";
            }
            arr.push_back(col);
        }
        ans.push_back(arr);
    }
    void check(vector<vector<string>>& board,int n,int col,vector<vector<string>>& ans)
    {
        if(col>=n)
        {
            saveans(board,ans,n);
            return;
        }

        for(int i = 0;i<n;i++)
        {
            if(safe(board,n,i,col))
            {    
                board[i][col] = "Q";
                check(board,n,col+1,ans);
                board[i][col] = ".";
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<vector<string>> board(n,vector<string> (n,"."));
        int j = 0;
        vector<vector<string>> ans;
        check(board,n,j,ans);
        return ans;
    }
}; */

/*
LeetCode - 51. N-Queens

Approach:
1. Use backtracking to place one queen in each column.
2. Before placing a queen, check its row and both diagonals
   on the already-filled portion of the board.
3. If the position is safe, place the queen and recurse
   for the next column.
4. Backtrack by removing the queen after exploring that choice.
5. Store the board whenever all columns are filled.

Time Complexity: O(n * n!)
Auxiliary Space Complexity: O(n^2)

Concepts: Backtracking, Recursion, N-Queens
*/