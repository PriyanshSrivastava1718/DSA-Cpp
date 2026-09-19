/* class Solution {
public:
    int countSymmetricIntegers(int low, int high) 
    {
        int ans = 0;
        for(int i = low;i<=high;i++)
        {
            int save  = i;
            int digits = 0;
            int s = 0;
            int p = i;
            while(save!=0)
            {
                s = s + save%10;
                save  = save / 10;
                digits++;
            }
            if(digits%2!=0)
                continue;
            else
            {
                int x = digits/2;
                int sl = 0;
                for(int j = 0;j<x;j++)
                {
                    sl += p%10;
                    p /= 10;
                }
                if(sl+sl == s)
                    ans++; 
            }
        }
    return ans;
    }
}; */
/*
    Question Type: Symmetric Integers

    Approach:
    - Traverse all integers from `low` to `high`.
    - Count the number of digits and calculate the total digit sum.
    - Ignore numbers having an odd number of digits.
    - For even-digit numbers, calculate the sum of the digits in
      the right half.
    - Since:
        left half + right half = total digit sum
      the number is symmetric when:
        right half + right half == total digit sum
    - Increment `ans` whenever the condition is satisfied.

    Time Complexity: O((high - low + 1) * log(high))
    Space Complexity: O(1)
*/