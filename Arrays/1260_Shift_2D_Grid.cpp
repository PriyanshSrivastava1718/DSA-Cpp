/* class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        int n = grid.size(); //row size
        int m = grid[0].size(); //column size
        int times = k % (m*n); //no of shifts 
        if(times==0) //if % operation gives 0  (saves time)
            return grid;
        for(int  i = 0;i<times;i++) //loop for iterations
        {
            int current= grid[0][0];  //2 variables for swapping 
            int prev = grid[0][0];
            for(int j = 0;j<n;j++)   //2d array traversing 
            {    for(int k=0;k<m;k++)
                {
                    prev = current;
                    current = grid[j][k];   //swapping
                    grid[j][k]=prev;
                }
            }
            grid[0][0] = current;  //inserting last element as first element
        }
        return grid;
    }
}; */
/* 
approach -  find row and column size
            k %=m*n
            loop 1 - ktimes
            2 variables used for swapping
            2 for loops iterating 2d array
            swap using variables 
            before ending k traversing add last element to first 
            return array
 */ 