/* class Solution {
public:
    int sumOfSquares(vector<int>& nums) 
    {
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            int x = i+1;
            if(n%x==0)
                ans += nums[i]*nums[i];
        }
        return ans;
    }
}; */
/*
    Question: Sum of Squares of Special Elements — LeetCode 2778

    Approach:
    - Traverse the array using a zero-based index i.
    - Convert i to a 1-based index using x = i + 1.
    - If n % x == 0, the element is special.
    - Add the square of nums[i] to the answer.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/