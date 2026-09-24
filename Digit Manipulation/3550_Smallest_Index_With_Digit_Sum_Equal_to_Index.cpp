/* class Solution {
public:
    int smallestIndex(vector<int>& nums) 
    {
        int ans = -1;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            int sum = 0;
            int save = nums[i];
            while(save!=0)
            {
                sum += save%10;
                save /= 10;
            }
            if(sum==i)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
}; */
/*
    Question Type: Digit Sum / Array Traversal

    Approach:
    - Traverse the array from left to right.
    - For each number, calculate its digit sum using `% 10` and `/= 10`.
    - Compare the digit sum with the current index.
    - Since we traverse from the beginning, the first match is the smallest
      valid index.
    - Return `-1` if no such index exists.

    Time Complexity: O(n * d), where d is the number of digits in a number.
    Space Complexity: O(1)
*/