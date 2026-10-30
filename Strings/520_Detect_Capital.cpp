/* class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        int n = word.length();
        if(n==1)
            return true;
        if(!isupper(word[0]))
        {
            for(int i = 1;i<n;i++)
            {
                if(isupper(word[i]))
                    return false;
            }
            return true;
        }
        else
        {
            if(isupper(word[n-1]))
            {
                for(int i = 1;i<n-1;i++)
                {
                    if(!isupper(word[i]))
                        return false;
                }
                return true;
            }
            for(int i = 1;i<n-1;i++)
            {
                if(isupper(word[i]))
                    return false;
            }
            return true;
        }
        return true;
    }
}; */
/*
LeetCode 520 - Detect Capital

Approach:
1. If the word contains only one character, return true.
2. If the first character is lowercase:
   - Check whether all remaining characters are lowercase.
3. If the first character is uppercase:
   - If the last character is uppercase, check whether all
     characters between the first and last are uppercase.
   - Otherwise, check whether all remaining characters are lowercase.
4. Return true if any valid capitalization pattern is satisfied.

Time Complexity: O(N)
Space Complexity: O(1)
*/