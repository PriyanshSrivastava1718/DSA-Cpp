/* class Solution {
public:
    int countSubstrings(string s) 
    {
        int n = s.length();
        int ans = 0;
        //for all odd substrings
        for(int i = 0;i<n;i++)
        {
            int st = i,e = i;
            ans++;
            st--;
            e++;
            while(st>=0 && e<n)
            {
                if(s[st]==s[e])
                {
                    ans++;
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
                    ans++;
                    st--;
                    e++;
                }
                else
                {
                    break;
                }
            }
        }
        return ans;
    }
}; */
/*
    Question Type: Palindromic Substrings

    Approach:
    - Use center expansion to find all palindromic substrings.
    - For odd-length palindromes, take each character as the center.
    - Expand `st` and `e` outward while the characters are equal.
    - For even-length palindromes, take the gap between every pair of
      adjacent characters as the center.
    - Expand outward in the same way.
    - Increment `ans` whenever a palindrome is found.

    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/