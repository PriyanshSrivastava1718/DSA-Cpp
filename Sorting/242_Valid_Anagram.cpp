/* class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int n = s.length();
        int m = t.length();
        if(n!=m)
            return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i = 0;i<n;i++)
        {
            char x = s[i];
            char y = t[i];
            if(x!=y)
                return false;
        }
        return true;
    }
}; */
/*
    Question: Valid Anagram — LeetCode 242

    Approach:
    - First check whether both strings have the same length.
    - Sort both strings alphabetically.
    - Compare the characters at each position.
    - If any character differs, the strings are not anagrams.
    - If all characters match, the strings are anagrams.

    Time Complexity: O(n log n)
    Space Complexity: O(1) auxiliary
*/