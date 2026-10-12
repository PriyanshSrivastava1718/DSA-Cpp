/* #include <vector>

class Solution {
private:
    vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    void dfs(vector<vector<char>>& grid, int i, int j) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != '1') 
        {
            return;
        }
        grid[i][j] = '$';
        for (const auto& p : dir) 
        {
            int ni = i + p.first;
            int nj = j + p.second;
            dfs(grid, ni, nj);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                if (grid[i][j] == '1') 
                {
                    dfs(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
}; */
/*
    Question: Number of Islands — LeetCode 200

    Approach:
    - Traverse every cell in the grid.
    - When an unvisited land cell ('1') is found, increment the island count.
    - Use DFS to explore all connected land cells in four directions.
    - Mark visited land cells as '$' to avoid counting them again.
    - Continue until all cells have been processed.

    Time Complexity: O(n * m)
    Space Complexity: O(n * m) in the worst case due to recursive DFS
*/