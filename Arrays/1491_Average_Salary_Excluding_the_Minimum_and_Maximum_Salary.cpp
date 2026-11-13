/* class Solution {
public:
    double average(vector<int>& salary) 
    {
        int n = salary.size();
        double ans = 0;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0;i<n;i++)
        {
            maxi = max(maxi,salary[i]);
            mini = min(mini,salary[i]);
        }
        int count = 0;
        for(int i = 0;i<n;i++)
        {
            if(salary[i]==maxi)
                continue;
            if(salary[i]==mini)
                continue;
            ans+=salary[i];
            count++;
        }
        return ans/count;
    }
}; */
/*
LeetCode 1491 - Average Salary Excluding the Minimum and Maximum Salary

Approach:
1. Traverse the salary array to find the minimum and maximum salaries.
2. Traverse the array again.
3. Skip the minimum and maximum salary.
4. Add all remaining salaries to the sum and maintain their count.
5. Return the average by dividing the sum by the count.

Time Complexity: O(N)
    - Two traversals of the salary array.

Space Complexity: O(1)
    - Only a constant number of extra variables are used.

Key Concepts:
- Array Traversal
- Finding Minimum and Maximum
- Basic Arithmetic
*/