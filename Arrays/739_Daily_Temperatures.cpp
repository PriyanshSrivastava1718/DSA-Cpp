/* class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        int st[n];
        int top = -1;
        for (int i = n - 1; i >= 0; i--) 
        {
            while (top >= 0 && temperatures[st[top]] <= temperatures[i]) 
            {
                top--;
            }
            if (top >= 0) 
            {
                ans[i] = st[top] - i;
            }
            st[++top] = i;
        }
        return ans;
    }
}; */
/*
    Algorithm:
    1. Traverse the temperatures array from right to left.
    2. Maintain a monotonic decreasing stack using an array that stores indexes.
    3. Remove all indexes from the stack whose temperature is smaller or equal
       to the current temperature because they cannot be the next warmer day.
    4. If the stack is not empty, the top index represents the nearest warmer day.
    5. Store the difference between current index and top index in the answer array.
    6. Push the current index into the stack for future comparisons.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/