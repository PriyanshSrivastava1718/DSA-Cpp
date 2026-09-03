/* class Solution {
public:
    bool rotateString(std::string s, std::string goal) 
    {
        if (s.length() != goal.length()) {
            return false;
        }
        string doubled = s + s;
        if(doubled.find(goal)==string::npos)
            return false;
        else 
            return true;
    }
}; */
/*
    Question Type: String / String Matching

    Approach:
    1. If the lengths of s and goal are different, return false
       because a rotation must contain the same characters.
    2. Create a new string by concatenating s with itself.
    3. Any possible rotation of s will appear as a substring
       inside this doubled string.
    4. Use find() to check whether goal exists in the doubled string.
    5. find() returns string::npos when the substring is not found.
    6. Return true if goal is found, otherwise return false.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/