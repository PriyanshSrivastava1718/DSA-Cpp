/* class Solution {
public:
    string digitSum(string s, int k) 
    {
        if(s.length()<=k)
            return s;
        string ans = "";
        l1:
        int n = s.length();
        int i = 0;
        ans = "";
        while(i < n)
        {
            int sum = 0;
            for(int j = 0; j < k; j++)
            {
                if(i == n)
                    break;

                char x = s[i];
                int p = x - '0';
                sum += p;
                i++;
            }
            ans += to_string(sum);
        }
        if(ans.length() > k)
        {
            s = ans;
            goto l1;
        }
        return ans;
    }
};
 */
/*
LeetCode 2243 - Calculate Digit Sum of a String

Approach:
1. If the length of the string is less than or equal to k,
   return the string as it is.
2. Divide the string into groups of k characters.
3. Calculate the sum of digits in each group.
4. Convert each sum into a string and append it to ans.
5. If the resulting string length is greater than k,
   make it the new input string and repeat the process.
6. Return the final string when its length becomes <= k.

Time Complexity: O(n log_k(n)) 
Space Complexity: O(n)

Note: Each round processes the current string once.
*/