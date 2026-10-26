/* class Solution {
public:
    int strStr(string s, string p) {
        int idx = s.find(p);
        if (idx != string::npos) 
        {
            return idx;
        }
        return -1;
    }
}; */
/*
Problem: Find the Index of the First Occurrence in a String
Platform: LeetCode (LC 28)
Topic: Strings, STL

Approach:

* Use the built-in string::find() function to locate the first occurrence of the pattern in the string.
* If the pattern is found, return its starting index.
* If the pattern is not found, return -1.

Time Complexity: O(n * m) worst case
Space Complexity: O(1) auxiliary space

Key Learning:
string::find() returns the index of the first occurrence of a substring, or string::npos if no match exists.
*/
