/* class Solution {
public:
    int distinctIntegers(int n) 
    {
        if(n==1)
            return 1;
        return n-1;
    }
}; */
/*
    Question Type: Count Distinct Numbers on Board

    Approach:
    - For n = 1, the board contains only the number 1, so return 1.
    - For n > 1, the process can produce every integer from 1 to n - 1.
    - Therefore, there are exactly n - 1 distinct numbers.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/