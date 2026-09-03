/* class Solution {
public:
    string toLowerCase(string s) 
    {
        for(int i = 0;i<s.length();i++)
        {
            s[i]=tolower(s[i]);
        }
        return s;
    }
}; */
/*
    Question Type: String / Character Conversion

    Approach:
    Traverse through each character of the string and use
    tolower() to convert it to lowercase.

    If the character is already lowercase, tolower() leaves
    it unchanged.

    Return the modified string after processing all characters.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/