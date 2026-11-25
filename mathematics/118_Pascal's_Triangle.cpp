/* class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
         vector<vector<int>> ans;
         vector<int> arr;
         ans.push_back({1});
         if(numRows==1)
            return ans;
         ans.push_back({1,1});
         for(int i = 2;i<numRows;i++)
         {
            arr.clear();
            for(int j = 0;j<=i;j++)
            {
                if(j==0 || j==i)
                    arr.push_back(1);
                else
                {
                    int x = ans[i-1][j]+ans[i-1][j-1];
                    arr.push_back(x);
                }
            }
            ans.push_back(arr);
         }
         return ans;
    }
}; */
/*
Approach:
- Generate Pascal's Triangle row by row.
- First and last elements of each row are 1.
- Every interior element is the sum of the two
  elements directly above it in the previous row.
- Store each completed row in the answer.

Time Complexity: O(n^2)
Space Complexity: O(n) auxiliary space (excluding output).
*/