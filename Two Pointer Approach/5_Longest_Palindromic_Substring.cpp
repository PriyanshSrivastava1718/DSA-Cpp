/* class Solution {
public:
    string longestPalindrome(string s) 
    {
        int n = s.length();
        int len = 1;
        string ans;
        ans.push_back(s[0]);
        //for all odd substrings
        for(int i = 0;i<n;i++)
        {
            int st = i,e = i;
            st--;
            e++;
            while(st>=0 && e<n)
            {
                if(s[st]==s[e])
                {
                    int x = (e-st)+1;
                    if(len<x)
                    {
                        len = x;
                        ans = s.substr(st,x);
                    }
                    st--;
                    e++;
                }
                else
                    break;
            }
        }
        //for even substrings
        for(int i = 0;i<n-1;i++)
        {
            int st = i;
            int e = i+1;
            while(st>=0 && e<n)
            {
                if(s[st]==s[e])
                {
                    int x = (e-st)+1;
                    if(len<x)
                    {
                        len = x;
                        ans = s.substr(st,x);
                    }
                    st--;
                    e++;
                }
                else
                    break;
            }
        }
        return ans;
    }
}; */
/*
    Question Type: Longest Palindromic Substring

    Approach:
    - Use center expansion to find palindromic substrings.
    - For odd-length palindromes, take each character as the center.
    - Expand `st` and `e` outward while the characters are equal.
    - For even-length palindromes, take the gap between every pair of
      adjacent characters as the center.
    - For every palindrome found, calculate its length.
    - If its length is greater than the current longest length,
      store that substring in `ans`.

    Time Complexity: O(n^2)
    Space Complexity: O(n)
*/