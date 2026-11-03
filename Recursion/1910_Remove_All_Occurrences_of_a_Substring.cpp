/* class Solution {
private:
    void check(string& s,string& s1)
    {
        int index = s.find(s1);
        if(index == string::npos)
            return;
        s.erase(index,s1.length());
        check(s,s1);
    }
public:
    string removeOccurrences(string s, string part) 
    {
        check(s,part);
        return s;
    }
}; */
/*
    LeetCode 1910 - Remove All Occurrences of a Substring

    Approach:
    1. Use recursion to repeatedly search for the substring part in s.
    2. Find the first occurrence using s.find().
    3. If the substring is not found, terminate recursion.
    4. If found, erase the substring using s.erase().
    5. Recursively call the function on the modified string.
    6. Return the final string after all occurrences are removed.

    Time Complexity: O(n^2) - Worst Case
    Space Complexity: O(n) - Recursion Stack
*/