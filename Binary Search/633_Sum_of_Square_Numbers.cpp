/* class Solution {
public:
    bool judgeSquareSum(int c) 
    {
        int s = 0;
        int e = sqrt(c);
        while(s<=e)
        {
            long long sum = (long long)s*s + e*e;
            if(sum == (long long)c)
            {
                return true;
            }
            else if(sum > (long long)c)
            {
                e -= 1;
            }
            else
            {
                s+=1;
            }
        }
        return false;
    }
}; */
/*
    Algorithm:
    1. Initialize two pointers: s = 0 and e = sqrt(c).
    2. Calculate the sum of squares: sum = s*s + e*e.
    3. If sum == c, return true.
    4. If sum > c, decrement e to reduce the sum.
    5. If sum < c, increment s to increase the sum.
    6. Repeat while s <= e. If no valid pair is found, return false.

    Time Complexity: O(sqrt(c))
    Space Complexity: O(1)
*/