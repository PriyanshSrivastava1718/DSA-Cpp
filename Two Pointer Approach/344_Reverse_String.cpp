/* class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int n = s.size();
        int st = 0;
        int e = n-1;
        while(st<=e)
        {
            swap(s[st],s[e]);
            st++;
            e--;
        }
    }
}; */
/*
    Question Type: String / Two Pointer

    Approach:
    Use two pointers, one at the beginning and one at the end
    of the string.

    Swap the characters at both pointers and move them toward
    the center until the entire string is reversed.

    The string is modified in-place, so no extra array is needed.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/