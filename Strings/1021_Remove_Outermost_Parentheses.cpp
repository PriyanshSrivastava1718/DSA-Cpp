/* class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        string result = "";
        int depth = 0;
        for (char c : s) 
        {
            if (c == '(') 
            {
                if (depth > 0) 
                {
                    result += c;
                }
                depth++;
            } 
            else 
            {
                depth--;
                if (depth > 0) 
                {
                    result += c;
                }
            }
        }
        return result;
    }
}; */
/*
    Question: Remove Outermost Parentheses — LeetCode 1021

    Approach:
    - Track the nesting depth using a counter.
    - For '(':
        - Append it only if depth > 0.
        - Increment depth.
    - For ')':
        - Decrement depth first.
        - Append it only if depth > 0.
    - This removes the outermost pair of every primitive parentheses string.

    Time Complexity: O(n)
    Space Complexity: O(1) auxiliary
*/
