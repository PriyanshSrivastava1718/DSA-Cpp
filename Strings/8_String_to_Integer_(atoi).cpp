/* class Solution {
public:
    int myAtoi(string s) 
    {
        int n = s.length();
        int i = 0;
        int sign = 1;
        long long ans = 0;
        while(i < n && s[i] == ' ')     //skip spacess
            i++;
        if(i < n && (s[i] == '+' || s[i] == '-'))       
        {
            if(s[i] == '-')
                sign = -1;
            i++;
        }
        while(i < n && s[i] >= '0' && s[i] <= '9')//overflow case
        {
            ans = ans * 10 + (s[i] - '0');
            if(sign == 1 && ans > INT_MAX)
                return INT_MAX;

            if(sign == -1 && -ans < INT_MIN)
                return INT_MIN;

            i++;
        }
        return (int)(sign * ans);
    }
}; */
/*
    Question: String to Integer (atoi) — LeetCode 8

    Approach:
    - Skip leading whitespace.
    - Check for an optional '+' or '-' sign.
    - Read consecutive numeric characters.
    - Convert each character to its digit value using (s[i] - '0').
    - Build the number using ans = ans * 10 + digit.
    - Stop when a non-digit character is encountered.
    - Handle integer overflow using INT_MAX and INT_MIN.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/