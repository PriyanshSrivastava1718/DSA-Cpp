/* class Solution {
public:
    char repeatedCharacter(string s) 
    {
        int n = s.length();
        unordered_map<char,int> ans;
        for(int i = 0;i<n;i++)
        {
            ans[s[i]]++;
            if(ans[s[i]]==2)
                return s[i];
        }
        return ' ';
    }
}; */
/*
Problem: First Letter to Appear Twice
Platform: LeetCode
Topic: Strings, Hashing

Approach:

* Traverse the string from left to right.
* Use an unordered_map to track the frequency of each character.
* Increment the frequency of the current character.
* If its frequency becomes 2, return that character immediately.
* Return a space character if no repeated character is found.

Time Complexity: O(n) average
Space Complexity: O(k), where k is the number of distinct characters.

Key Learning:

* Detecting repetition during a single traversal avoids an unnecessary second pass.
* Returning immediately identifies the character whose second occurrence appears first.
  */
