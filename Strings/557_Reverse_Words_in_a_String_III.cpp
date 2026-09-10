/* class Solution {
public:
    string reverseWords(string s) 
    {
        int n = s.length();
        int st = 0;
        int e;
        for(int i = 0;i<=n;i++)
        {
            if(s[i] == ' ' || s[i] == '\0')
            {
                e = i-1;
                while(st<e)
                {
                    swap(s[st],s[e]);
                    st++;
                    e--;
                }
                st = i+1;
            }
        }
        return s;
    }
}; */
/*
    Question Type: String / Two Pointer

    Approach:
    Traverse the string and identify each word using spaces as
    boundaries.

    For every word, use two pointers to reverse its characters
    in-place. After processing all words separated by spaces,
    reverse the final word as well.

    The string is modified directly without creating another
    string.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/