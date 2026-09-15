/* class Solution 
{
private:
    bool isPalindrome(const std::string& s, int i, int j) 
    {
        while (i < j) 
        {
            if (s[i] != s[j]) 
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

public:
    bool validPalindrome(std::string s) 
    {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) 
        {
            if (s[left] == s[right]) 
            {
                left++;
                right--;
            } 
            else 
            {
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
        }
        return true;
    }
}; */
/*
    Question Type: Valid Palindrome

    Approach:
    - Use two pointers, `left` and `right`, starting from both ends.
    - Move inward while the characters match.
    - When the first mismatch is found, try both possibilities:
        1. Skip the character at `left`.
        2. Skip the character at `right`.
    - Check whether either remaining substring is a palindrome.
    - If no mismatch occurs, the original string is already a palindrome.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/