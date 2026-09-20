/* class Solution {
public:
    int reverseDegree(string s) 
    {
        int n = s.length();
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            char x = s[i];
            int lr = int(x)-96;
            int rl = 27-lr;
            ans = ans + rl*(i+1);
        }
        return ans;
    }
}; */
/*
    Question Type: Reverse Degree of a String

    Approach:
    - Traverse the string from left to right.
    - Convert each character to its normal alphabet position using ASCII.
    - Reverse its alphabet position:
        a -> 26, b -> 25, ..., z -> 1
    - Multiply the reverse position by the character's 1-based index.
    - Add all contributions to get the final reverse degree.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/