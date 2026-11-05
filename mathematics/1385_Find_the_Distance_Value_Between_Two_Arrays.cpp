/* class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        int n = arr1.size();
        int m = arr2.size();
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            bool valid = true;
            for(int j = 0; j < m; j++)
            {
                int x = abs(arr1[i] - arr2[j]);
                if(x <= d)
                {
                    valid = false;
                    break;
                }
            }
            if(valid)
                ans++;
        }
        return ans;
    }
}; */
/*
LeetCode 1385 - Find the Distance Value Between Two Arrays

Approach:
1. Traverse every element of arr1.
2. Assume the current element is valid initially.
3. Compare it with every element of arr2.
4. Calculate the absolute difference.
5. If the difference is <= d, mark the element invalid
   and break out of the inner loop.
6. If no violation is found, increment the answer.

Time Complexity: O(N * M)
    - N = size of arr1
    - M = size of arr2

Space Complexity: O(1)
    - Only constant extra variables are used.

Key Concept:
An element from arr1 is counted only if its absolute
difference from EVERY element in arr2 is greater than d.
*/