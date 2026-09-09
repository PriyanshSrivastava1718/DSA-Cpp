/* class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int ans = 0;
        for(int i = 0;i<nums.size();i++)
        {
            int count  = 0;
            int save = nums[i];
            while(save!=0)
            {
                count++;
                save /= 10;
            }
            if(count%2==0)
                ans++;
        }    
        return ans;
    }
}; */
/*
    Question Type: Array / Digit Manipulation

    Approach:
    Traverse each number and count its digits by repeatedly
    dividing it by 10.

    If the number of digits is even, increment the answer.

    Time Complexity: O(n * d)
    Space Complexity: O(1)

    where d is the maximum number of digits in a number.
*/